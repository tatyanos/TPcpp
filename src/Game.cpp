#include "Game.h"
#include "cards/Card.h"
#include "cards/CardGenerator.h"

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
		break;
	}
	while (victor1 != 3 || victor2 != 3);
	return false; // like end the games
}

void Game::round() {
	CardGenerator *generator = CardGenerator::getInstance();
	generator->getHandCard()->apply(tableCards1, &sum1);
	generator->getHandCard()->apply(tableCards2, &sum2);
}

Game::~Game() {
	delete(tableCards1);
	delete(tableCards2);
}
