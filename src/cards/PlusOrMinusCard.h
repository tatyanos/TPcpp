#ifndef PlusOrMinusCard_H
#define PlusOrMinusCard_H
#include "CardBase.h"

class PlusOrMinusCard : public CardBase {
public:
	int value;
	std::string toString();
};

#endif
