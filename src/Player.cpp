#include "Player.h"
#include "Game.h"
#include <iostream>
#include <string>

#include "GUI.h"
#include "cards/CardSet.h"

using namespace std;

Player::Player(string name) {
	this->name = name;
	cards = new CardSet();
	victories = 0;
}

Player::~Player() {
	delete cards;
}

void Player::addCard(Card * card) {
	cards->add(card);
}

Card *Player::extractCard(int index) {
	return cards->extract(index);
}

string Player::getName() const {
	return name;
}

unsigned int Player::getVictory() const {
	return victories;
}

void Player::printCard(int index) {
	Card *card = cards->get(index);
	if (card) {
		card->print();
	}
	else {
		cout << "  ";
	}
}
