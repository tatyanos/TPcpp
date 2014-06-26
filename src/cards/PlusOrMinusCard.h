#ifndef PlusOrMinusCard_H
#define PlusOrMinusCard_H
#include "Card.h"

class PlusOrMinusCard : public Card {
public:
	int value;
	std::string toString();
};

#endif
