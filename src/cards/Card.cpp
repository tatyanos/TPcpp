#include <string>
#include <sstream>
#include <iostream>

#include "Card.h"

using namespace std;

Card::Card(int price) {
	this->price = price;
}

Card::~Card() {
	cout << "~Card" << endl;
}

void Card::apply(vector<Card *> *tableCards, int *sum) {
	*sum += price;
	tableCards->push_back(this);
}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    os << " " << card.price;
    return os;
}

std::string Card::toString() {
	return " " + convertToString(price);
}

template <class T> std::string Card::convertToString(T t) {
	std::stringstream ss;
	std::string s;
	ss << t;
	s = ss.str();
	return s;
}


