#include "Player.h"
#include "cards/CardGenerator.h"
#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	Player player1, player2;

	CardGenerator *generator = CardGenerator::getInstance();

	for (int i = 0; i < 4; ++i) {
		player1.addCard(generator->getHandCard());
		player2.addCard(generator->getHandCard());
	}

	player1.printCards();
	player2.printCards();

	return 0;
}

