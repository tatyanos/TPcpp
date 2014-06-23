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
	player1->printCard(0); cout << "  " << "**" << "                        " << "* "<< " "; player2->printCard(0); cout << endl;
	player1->printCard(1); cout << "         "; game->printCard1(0); game->printCard1(1); game->printCard1(2); cout << " " << "-1-1-1"<< "         "; player2->printCard(1); cout << endl;
	player1->printCard(2); cout << "         "; game->printCard1(3); game->printCard1(4); game->printCard1(5); cout  << " " << "-2-2-2"<< "         "; player2->printCard(2); cout << endl;
	player1->printCard(3); cout << "         "; game->printCard1(6); game->printCard1(7); game->printCard1(8); cout  << " " << "-2-2-2"<< "         "; player2->printCard(3); cout << endl;
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

