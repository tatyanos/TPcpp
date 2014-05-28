#include "Card.h"
#include <string>
#include <sstream>

Card::Card(int price) {
	this->price = price;
}

Card::~Card() {

}

void Card::apply(Game *) {

}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    os << "card " << card.price;
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


