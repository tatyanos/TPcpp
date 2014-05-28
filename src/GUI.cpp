#include <iostream>
#include "GUI.h"

void GUI::print() {
	std::cout << "    Player1   " << 15 << " | " << 20 << "   Player2" << std::endl;
	std::cout << "+1" << "  " << "**" << "                        " << "* "<< " " << 12 << std::endl;
	std::cout << "+1" << "         " << " 1 2 3" << " " << "-1-1-1"<< "         " << 12 << std::endl;
	std::cout << "?1" << "         " << " 4+5-6" << " " << "-2-2-2"<< "         " << 12 << std::endl;
	std::cout << "-1" << "         " << "+7+8+9" << " " << "-2-2-2"<< "         " << 12 << std::endl;
}

std::string GUI::getSum() {
	return " ";// + convertToString(1);
}
