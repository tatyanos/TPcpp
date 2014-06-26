#ifndef Player_H
#define Player_H

#include <string>
#include <vector>

class CardBase;

using namespace std;

class Player {
private:
	string name;
	unsigned int victories;
	vector<CardBase *> *cards;
public:

	void addCard(CardBase *);
	void printCards() const;
	void cleanCards();
	CardBase *extractCard(int);
	void printCard(int);
	unsigned int getVictory() const;
	string getName()const;

	Player(string);
	~Player();
};

#endif
