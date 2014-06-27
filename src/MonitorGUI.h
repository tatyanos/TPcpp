#ifndef MonitorGUI_H
#define MonitorGUI_H

#include <string>

#include "Player.h"

class Game;

using namespace std;

class MonitorGUI {
public:
	MonitorGUI(Player *, Player *, Game *);
	void print();
	static string getUserName();
	static void clear();
	unsigned int getTurn();
private:
	Player *player1, *player2;
	Game *game;

	string getSum();


};

#endif
