#ifndef Game_H
#define Game_H

#include "Player.h"

class Game {
private:
	int sum1;
	int sum2;
public:
	Game ();
	~Game ();
private:
	void putPlayerInfo ();
	void getPlayerInfo ();
	size_t compare ();
};

#endif