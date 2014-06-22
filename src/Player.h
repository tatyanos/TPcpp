#ifndef Player_H
#define Player_H

#include <string>
#include <vector>

#include "cards/Card.h"

using namespace std;

class Player {
private:
	string name;
	unsigned int victories;
	vector<Card *> *cards;
public:

	void addCard(Card *);
	void printCards() const;
	void cleanCards();
	unsigned int getVictory() const;

	void nextCard();
	void stop();
	void chooseCard();

	Player(string);
	~Player();
};

#endif
