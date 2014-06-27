#include "MonitorFS.h"
#include <iostream>
#include <fstream>

#include <time.h>
using namespace std;

MonitorFS::MonitorFS() {
	myfile.open ("game.log");
}

MonitorFS::~MonitorFS() {
	myfile.close();
}

void MonitorFS::update() {
	myfile << "Turn " << time(NULL) << "\n";
}