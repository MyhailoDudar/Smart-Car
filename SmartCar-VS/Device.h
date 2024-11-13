#ifndef DEVICE_H
#define DEVICE_H

#include <string>

using namespace std;

class Device {
protected:
	string name;
	bool state;

public:
	Device(const string& name);
	virtual void turnOn();
	virtual void turnOff();
	virtual void status()const;
	
};




#endif // !DEVICE_H



