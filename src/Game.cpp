#include "Game.h"
#include "cards/Card.h"
#include "cards/CardSet.h"
#include "cards/CardGenerator.h"
#include "MonitorGUI.h"

#include <iostream>
using namespace std;

const unsigned int PLAYER_CARDS = 4;
const unsigned int VICTORY = 3;

Game::Game(Player *player1, Player *player2) {

	this->player1 = player1;
	this->player2 = player2;
	victor1 = 0;
	victor2 = 0;

	CardGenerator *generator = CardGenerator::getInstance();

	for (unsigned int i = 0; i < PLAYER_CARDS; ++i) {
		player1->addCard(generator->getHandCard());
		player2->addCard(generator->getHandCard());
	}

	cards1 = new CardSet();
	cards2 = new CardSet();
}

bool Game::play() {
	do {
		round();
	}
	while (victor1 < VICTORY && victor2 < VICTORY);

	if (victor1 == 3) {
		cout << "winner is " << player1->getName() << endl;
	} else if (victor2 == 3) {
		cout << "winner is " << player2->getName() << endl;
	}
	return false; // like end the games
}

void Game::round() {
	int next1 = 1, next2 = 1;
	CardGenerator *generator = CardGenerator::getInstance();

	((CardSet *)cards1)->clear();
	((CardSet *)cards2)->clear();
	cards1->add(generator->getHandCard());
	cards2->add(generator->getHandCard());

	notify();
	while (cards1->getPrice() < 20 && cards1->getPrice() < 20) {

		int answer1, answer2;
		if (next1) {
			answer1 = MonitorGUI::getTurn();
		}

		if (answer1 > 0) {
			cards1->add(player1->extractCard(answer1 - 1));
		} else if (answer1 == 0) {
			cards1->add(generator->getHandCard());
		} else if (answer1 == -1) {
			next1 = 0;
		}

		notify();

		if (next2) {
			answer2 = MonitorGUI::getTurn();
		}

		if (answer2 > 0) {
			cards2->add(player2->extractCard(answer2 - 1));
		} else if (answer2 == 0) {
			cards2->add(generator->getHandCard());
		} else if (answer2 == -1) {
			next2 = 0;
		}

		notify();
	}
	if (cards1->getPrice() >= 20) {
		victor2 += 1;
	} else if (cards2->getPrice() >= 20) {
		victor1 += 1;
	}
}

int Game::getSum1() const{
	return cards1->getPrice();
}

int Game::getSum2() const{
	return cards2->getPrice();
}

int Game::getVictor1() const{
	return victor1;
}

int Game::getVictor2() const{
	return victor2;
}


void Game::printCard1(int index) {
	((CardSet *)cards1)->print(index);
}

void Game::printCard2(int index) {
	((CardSet *)cards2)->print(index);
}

void Game::addObserever(MonitorBase *observer) {
	observers.push_back(observer);
}

void Game::notify() {
	for (unsigned int i = 0; i < observers.size(); ++i) {
		observers[i]->update();
	}
}

Game::~Game() {
	delete cards1;
	delete cards2;
}
