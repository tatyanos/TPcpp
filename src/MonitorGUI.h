#ifndef MonitorGUI_H
#define MonitorGUI_H

#include <string>

#include "MonitorBase.h"
#include "Player.h"

class Game;

using namespace std;

class MonitorGUI : public MonitorBase {
public:
	MonitorGUI(Player *, Player *, Game *);
	void print();
	static string getUserName();
	static void clear();
	static unsigned int getTurn();
	void update();
private:
	Player *player1, *player2;
	Game *game;

	string getSum();


};

#endif
