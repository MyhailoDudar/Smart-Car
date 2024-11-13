#ifndef INFO_H
#define INFO_H

#include "Device.h"
#include <string>

using namespace std;

class Info {
public:
    Info(std::string Model, std::string Etype, std::string color, int MaxVel, std::string Owner, int Age);
    void DriverInfo();
    void CarInfo();
protected:
    std::string Model;
    std::string Etype;
    std::string color;
    int MaxVel;
    std::string Owner;
    int Age;
};

#endif // INFO_H

