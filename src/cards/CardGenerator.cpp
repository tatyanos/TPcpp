#include "CardGenerator.h"
#include <stdlib.h>
#include <time.h>

#include "CardBase.h"

CardGenerator * CardGenerator::instance = 0;

CardGenerator::CardGenerator() {
	twister.seed(time(NULL));
}

Card * CardGenerator::getHandCard() {
	return new CardBase(getRandomInt());
}

int CardGenerator::getRandomInt() {
	return (twister() % 10) + 1;
}

CardGenerator::~CardGenerator() {
	delete instance;
}
 
CardGenerator* CardGenerator::getInstance() {
	if (!instance) {
		instance = new CardGenerator();
	}
	return instance;
}
