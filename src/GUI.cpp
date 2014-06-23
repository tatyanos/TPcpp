#include <iostream>
#include <string>
#include <stdlib.h>

#include "GUI.h"
#include "Game.h"

using namespace std;

GUI::GUI(Player *player1, Player *player2, Game *game) {
	this->player1 = player1;
	this->player2 = player2;
	this->game = game;

	// todo remove
	//game->play();
}

void GUI::print() {
	GUI::clear();

	cout << "    Player1   " << game->getSum1() << " | " << game->getSum2()   << "   Player2" << endl;
	cout << "+1" << "  " << "**" << "                        " << "* "<< " " << 12 << endl;
	cout << "+1" << "         " << " 1 2 3" << " " << "-1-1-1"<< "         " << 12 << endl;
	cout << "?1" << "         " << " 4+5-6" << " " << "-2-2-2"<< "         " << 12 << endl;
	cout << "-1" << "         " << "+7+8+9" << " " << "-2-2-2"<< "         " << 12 << endl;
}

string GUI::getSum() {
	return " ";// + convertToString(1);
}

string GUI::getUserName() {
	string name;
	cout << "enter your name:" << endl;
	cin >> name;
	return name;
}

void GUI::clear() {
	system("clear");
}

unsigned int GUI::getTurn() {
	cout << "your turn:" << endl;
	unsigned int answer;
	cin >> answer;
	return answer;
}

