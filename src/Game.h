#ifndef Game_H
#define Game_H

#include "Player.h"
#include "GUI.h"

class Game {
private:
	int sum1, sum2;
	unsigned int victor1, victor2;
	Player *player1, *player2;
	GUI *gui;
public:
	Game (Player*, Player*);
	bool play();
private:
	void putPlayerInfo ();
	void getPlayerInfo ();
	void round();
	size_t compare ();

};

#endif
