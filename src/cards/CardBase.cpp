#include <string>
#include <sstream>
#include <iostream>

#include "CardBase.h"

using namespace std;

CardBase::CardBase(int price) {
	this->price = price;
}

CardBase::~CardBase() {

}

void CardBase::apply(vector<CardBase *> *tableCards, int *sum) {
	*sum += price;
	tableCards->push_back(this);
}

std::ostream& operator<<(std::ostream& os, const CardBase& card)
{
    os << " " << card.price;
    return os;
}

std::string CardBase::toString() {
	return " " + convertToString(price);
}

template <class T> std::string CardBase::convertToString(T t) {
	std::stringstream ss;
	std::string s;
	ss << t;
	s = ss.str();
	return s;
}

int CardBase::getPrice() {
	return price;
}

Card *CardBase::extract(const int &index) {
	return this;
}

void CardBase::add(Card *card) {

}

Card *CardBase::get(const int &index) {
	return this;
}

void CardBase::print() {
	cout << " " << getPrice();
}

