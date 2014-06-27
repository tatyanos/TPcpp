#ifndef Player_H
#define Player_H

#include <string>
#include <vector>

#include "cards\Card.h"

class CardBase;

using namespace std;

class Player {
private:
	string name;
	unsigned int victories;
	Card* cards;
public:

	void addCard(Card *);
	void printCards() const;
	Card *extractCard(int);
	void printCard(int);
	unsigned int getVictory() const;
	string getName()const;

	Player(string);
	~Player();
};

#endif
