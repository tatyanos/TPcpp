#include <iostream>

#include "Player.h"
#include "Game.h"
#include "cards/CardGenerator.h"
#include "MonitorGUI.h"

using namespace std;


int main(int argc, char **argv)
{
	MonitorGUI::clear();
	Player 	player1(MonitorGUI::getUserName()),
			player2(MonitorGUI::getUserName());

	Game *game = NULL;
	do {
		delete game;
		game = new Game(&player1, &player2);
	}
	while (game->play());
	delete game;

	cout << "Good bye!" << endl;
	return 0;
}

