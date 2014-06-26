#ifndef CardGenerator_H
#define CardGenerator_H

#include <boost/random/mersenne_twister.hpp>

#include "Card.h"

class CardGenerator {
protected:
	static CardGenerator *instance;
	CardGenerator();

	boost::mt19937 twister;
 
public:
	static CardGenerator *getInstance();

	Card *getHandCard();

	~CardGenerator();
private:
	int getRandomInt();
};


#endif
