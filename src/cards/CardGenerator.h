#ifndef CardGenerator_H
#define CardGenerator_H

#include "Card.h"

class CardGenerator {
protected:
	static CardGenerator *instance;
	CardGenerator();	
 
public:
	static CardGenerator *getInstance();

	Card *getHandCard();

	~CardGenerator();
private:
	int getRandomInt() const;
};


#endif
