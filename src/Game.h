#ifndef Game_H
#define Game_H

#include "cards\Card.h"
#include "Player.h"
#include "MonitorGUI.h"
#include "MonitorBase.h"

class Game {
private:
	unsigned int victor1, victor2;
	Player *player1, *player2;

	Card *cards1;
	Card *cards2;

	void round();
	vector<MonitorBase *> observers;

public:
	Game (Player*, Player*);
	~Game ();
	bool play();
	int getSum1() const;
	int getSum2() const;
	int getVictor1() const;
	int getVictor2() const;
	void printCard1(int);
	void printCard2(int);
	void addObserever(MonitorBase *);
	void notify();
};

#endif
