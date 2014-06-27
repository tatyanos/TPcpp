#include <iostream>
#include "Player.h"
#include "Game.h"
#include "cards/CardGenerator.h"
#include "MonitorGUI.h"
#include "MonitorFS.h"

using namespace std;


int main(int argc, char **argv)
{
	MonitorFS mFS;
	MonitorGUI::clear();
	Player 	player1(MonitorGUI::getUserName()),
			player2(MonitorGUI::getUserName());

	Game *game = NULL;
	MonitorGUI *gui = NULL;
	do {
		delete game;
		delete gui;
		game = new Game(&player1, &player2);
		game->addObserever(&mFS);
		gui = new MonitorGUI(&player1, &player2, game);
		game->addObserever(gui);
	}
	while (game->play());
	delete game;

	cout << "Good bye!" << endl;
	return 0;
}

