#include <iostream>

#include "Player.h"
#include "Game.h"
#include "cards/CardGenerator.h"
#include "GUI.h"

using namespace std;


int main(int argc, char **argv)
{
	GUI::clear();
	Player 	player1(GUI::getUserName()),
			player2(GUI::getUserName());

	Game *game = NULL;
	do {
		delete game;
		game = new Game(&player1, &player2);
	}
	while (game->play());

	cout << "Good bye!" << endl;
	return 0;
}

