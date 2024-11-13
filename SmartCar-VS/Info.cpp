#include "Info.h"
#include <iostream>

using namespace std;

Info::Info(string Model, string Etype, string color, int MaxVel, string Owner, int Age)
    : Model(Model), Etype(Etype), color(color), MaxVel(MaxVel), Owner(Owner), Age(Age) {}

void Info::CarInfo() {
    cout << "Model: " << Model << "\nEngine type: " << Etype << "\nColor: " << color
        << "\nMax speed: " << MaxVel << " km/h\n" << endl;
}

void Info::DriverInfo() {
    cout << "Owner is: " << Owner << ", Age: " << Age << " years old" << endl;
}
