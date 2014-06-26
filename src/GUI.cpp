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
}

void GUI::print() {
	GUI::clear();

	cout << player1->getName() << " " << game->getSum1() << " | " << game->getSum2() << " " << player2->getName() << endl;
	player1->printCard(0); cout << "  " << "  " << "                        " << "  "<< " "; player2->printCard(0); cout << endl;
	player1->printCard(1); cout << "         "; game->printCard1(0); game->printCard1(1); game->printCard1(2); cout << " "; game->printCard2(0); game->printCard2(1); game->printCard2(2); cout << "         "; player2->printCard(1); cout << endl;
	player1->printCard(2); cout << "         "; game->printCard1(3); game->printCard1(4); game->printCard1(5); cout  << " "; game->printCard2(3); game->printCard2(4); game->printCard2(5); cout << "         "; player2->printCard(2); cout << endl;
	player1->printCard(3); cout << "         "; game->printCard1(6); game->printCard1(7); game->printCard1(8); cout  << " "; game->printCard2(6); game->printCard2(7); game->printCard2(8); cout << "         "; player2->printCard(3); cout << endl;
	cout << game->getVictor1() << " | " << game-> getVictor2() <<  endl;
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
#ifdef __unix__
	system("clear");
#endif
#ifdef WIN32
	system("cls");
#endif
}

unsigned int GUI::getTurn() {
	cout << "your turn:" << endl;
	unsigned int answer;
	cin >> answer;
	return answer;
}

