#ifndef Player_H
#define Player_H

#include <string>
#include <vector>

class Card;

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
	Card *extractCard(int);
	unsigned int getVictory() const;


	void nextCard();
	void stop();
	void chooseCard();

	Player(string);
	~Player();
};

#endif
