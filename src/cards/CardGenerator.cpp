#include "CardGenerator.h"
#include <stdlib.h>
#include <time.h>

CardGenerator * CardGenerator::instance = 0;

CardGenerator::CardGenerator() {
	srand(time(NULL));
}

Card * CardGenerator::getHandCard() {
	return new Card(getRandomInt());
}

int CardGenerator::getRandomInt() const {
	return rand() % 10 + 1;
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
