#ifndef CARD_H
#define CARD_H

#include <string>
#include <ostream>

#include "../Game.h"
enum colors {Green, Gold, Red, Blue};

class Card {
protected:	
	int price;
	colors color;

public:
	Card(int price);
	virtual ~Card();
	virtual void apply (Game *);
	friend std::ostream& operator<<(std::ostream& os, const Card& card);
	std::string toString();
	template <class T> static std::string convertToString(T);
};

#endif
