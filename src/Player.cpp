#include "Player.h"
#include <iostream>

#include <iostream>
#include "GUI.h"

using namespace std;

Player::Player(string name) {
	this->name = name;
	cards = new vector<Card *>();
	victories = 0;
}

Player::~Player() {
	cleanCards();
	delete cards;
}

void Player::addCard(Card * card) {
	cards->push_back(card);
}

void Player::cleanCards() {
	for (unsigned int i = 0; i < cards->size(); ++i) {
		delete (*cards)[i];
	}
	cards->clear();
}

void Player::printCards() const {
	for (unsigned int i = 0; i < cards->size(); ++i) {
		cout << (*cards)[i] << endl;
	}
}

unsigned int Player::getVictory() const {
	return victories;
}
