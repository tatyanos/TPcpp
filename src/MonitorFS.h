#ifndef MONITORFS_H
#define MONITORFS_H

#include "MonitorBase.h"
#include <fstream>
using namespace std;

class MonitorFS : public MonitorBase
{
public: 
	MonitorFS();
	~MonitorFS();
	
	void update();
private:
	ofstream myfile;
};

#endif