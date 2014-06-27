#include "CardSet.h"
#include <iostream>
using namespace std;

CardSet::CardSet() {

}

void CardSet::clear(){
	for (unsigned int i = 0; i < cards.size(); ++i) {
		delete cards[i];
	}
	cards.clear();
}

CardSet::~CardSet() {
	clear();
}

int CardSet::getPrice() {
	int result = 0;
	for (unsigned int i = 0; i < cards.size(); ++i) {
		result += cards[i]->getPrice();
	}
	return result;
}

void CardSet::add(Card *card) {
	cards.push_back(card);
}

Card *CardSet::extract(const int &index) {
	Card *card = get(index);
	if (card != NULL) {
		cards.erase(cards.begin() + index);
	}
	return card;
}

Card *CardSet::get(const int &index) {
	if (index >= 0 && index < cards.size()) {
		return cards[index];
	}
	return NULL;
}

void CardSet::print() {
	for (unsigned int i = 0; i < cards.size(); ++i) {
		cards[i]->print();
	}
}

void CardSet::print(const int &index) {
	Card *card = get(index);
	if (card) {
		card->print();
	}
	else {
		cout << "  ";
	}
}