#include "Game.h"
#include "cards/Card.h"
#include "cards/CardGenerator.h"

#include <iostream>
using namespace std;

const unsigned int PLAYER_CARDS = 4;
const unsigned int VICTORY = 3;

Game::Game(Player *player1, Player *player2) {
	gui = new GUI(player1, player2, this);

	this->player1 = player1;
	this->player2 = player2;
	victor1 = 0;
	victor2 = 0;
	sum1 = 0;
	sum2 = 0;
	player1->cleanCards();
	player2->cleanCards();

	CardGenerator *generator = CardGenerator::getInstance();

	for (unsigned int i = 0; i < PLAYER_CARDS; ++i) {
		player1->addCard(generator->getHandCard());
		player2->addCard(generator->getHandCard());
	}

	tableCards1 = new vector<Card *>();
	tableCards2 = new vector<Card *>();
}

bool Game::play() {

	do {
		round();
	}
	while (victor1 != 3 || victor2 != 3);
	if (victor1 == 3) {
		cout << "winner is ";
		player1->printName();
	} else if (victor2 == 3) {
		cout << "winner is ";
		player2->printName();
	} else {
		cout << "draw" << endl;
	}
	return false; // like end the games
}

void Game::round() {
	int next1 = 1, next2 = 1;
	CardGenerator *generator = CardGenerator::getInstance();
	generator->getHandCard()->apply(tableCards1, &sum1);
	generator->getHandCard()->apply(tableCards2, &sum2);

	while (sum1 < 20 && sum2 < 20) {
		gui->print();

		int answer1, answer2;
		if (next1) {
			answer1 = gui->getTurn();
		}

		if (answer1 > 0) {
			player1->extractCard(answer1)->apply(tableCards1, &sum1);
		} else if (answer1 == 0) {
			generator->getHandCard()->apply(tableCards1, &sum1);
		} else if (answer1 == -1) {
			next1 = 0;
		}

		gui->print();

		if (next2) {
			answer2 = gui->getTurn();
		}

		if (answer2 > 0) {
			player2->extractCard(answer2)->apply(tableCards2, &sum2);
		} else if (answer2 == 0) {
			generator->getHandCard()->apply(tableCards2, &sum2);
		} else if (answer2 == -1) {
			next2 = 0;
		}
		gui->print();
	}
	if (sum1 >= 20) {
		victor2++;
	} else if (sum2 >= 20) {
		victor1++;
	}
}

int Game::getSum1() const{
	return sum1;
}

int Game::getSum2() const{
	return sum2;
}


void Game::printCard1(int index) {
	if (index < int(tableCards1->size())) {
	cout << *(*tableCards1)[index];
	}
	else {
		cout << "   ";
	}
}

void Game::printCard2(int index) {
	if (index < int(tableCards2->size())) {
	cout << *(*tableCards2)[index];
	}
	else {
		cout << " ";
	}
}

Game::~Game() {
	delete(tableCards1);
	delete(tableCards2);
	delete(gui);
}
