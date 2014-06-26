#include "Player.h"
#include "Game.h"
#include <iostream>
#include <string>

#include "GUI.h"
#include "cards/CardBase.h"

using namespace std;

Player::Player(string name) {
	this->name = name;
	cards = new vector<CardBase *>();
	victories = 0;
}

Player::~Player() {
	cleanCards();
	delete cards;
}

void Player::addCard(CardBase * card) {
	cards->push_back(card);
}

CardBase *Player::extractCard(int index) {
	cout << cards->size() << endl;

	CardBase *card = (*cards)[index - 1];
	cards->erase(cards->begin() + index - 1);

	cout << cards->size() << endl;

	return card;
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

string Player::getName() const {
	return name;
}

unsigned int Player::getVictory() const {
	return victories;
}

void Player::printCard(int index) {
	if (index >= 0 && index < (int)(cards->size())) {
		cout << *(*cards)[index];
	}
	else {
		cout << "  ";
	}
}
