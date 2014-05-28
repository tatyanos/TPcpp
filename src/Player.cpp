#include "Player.h"
#include <iostream>

const size_t CARDS_PLAYER = 10;

Player::Player() {

}

Player::~Player() {

}

bool Player::addCard(Card * card) {
	if (cards.size() < CARDS_PLAYER) {
		cards.push_back(card);
		return true;
	}
	return false;
}

void Player::printCards() const {
	for (int i = 0; i < cards.size(); ++i) {
		std::cout << *cards[i] << std::endl;
	}
}
