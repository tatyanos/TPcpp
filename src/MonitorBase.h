#ifndef MONITORBASE_H
#define MONITORBASE_H

class MonitorBase
{
public: 
	MonitorBase();
	
	virtual void update() = 0;

	~MonitorBase(void);
};

#endif