#ifndef CARDSET_H
#define CARDSET_H

#include <vector>

#include "Card.h"

using namespace std;

class CardSet : public Card {
private:
	vector<Card *> cards;
public:
	CardSet();
	~CardSet();
	int getPrice();
	Card *extract(const int &);
	void add(Card *);
	Card *get(const int &);
	void print();
	void print(const int &);
	void clear();
};


#endif