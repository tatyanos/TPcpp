#ifndef CARDBASE_H
#define CARDBASE_H

#include <string>
#include <ostream>

#include "Card.h"
#include "../Game.h"
enum colors {Green, Gold, Red, Blue};

class CardBase : public Card {
protected:	
	int price;
public:
	CardBase(int price);
	virtual ~CardBase();
	virtual void apply ( vector<CardBase *> *, int *);
	friend std::ostream& operator<<(std::ostream& os, const CardBase& card);
	std::string toString();
	template <class T> static std::string convertToString(T);

	int getPrice();
	Card *extract(const int &);
	void add(Card *);
	Card *get(const int&);
	void print();
};

#endif
