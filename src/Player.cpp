#include "Player.h"
#include "Game.h"
#include <iostream>

#include "GUI.h"
#include "cards/Card.h"

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

Card *Player::extractCard(int index) {
	Card *card = (*cards)[index - 1];
	cards->erase(cards->begin() + index - 1);
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

void Player::printName() {
	cout << name;
}

unsigned int Player::getVictory() const {
	return victories;
}

void Player::printCard(int index) {
	cout << *(*cards)[index];
}
