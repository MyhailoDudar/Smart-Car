#include "Info.h"
#include "Conditioner.h"
#include "Signal.h"
#include "Engine.h"
#include "Media.h"
#include <iostream>
#include <string>

using namespace std;

Conditioner Vent("Conditioner", 20);
Engine CarEngine("Car Engine");
Media AudioSystem("Media System", 100);
Signal CarSignal("Car Signal");
Info CarInfo("Tesla Model X", "Double electric", "White", 250, "Stephan", 25);


void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int main()
{
    int temp;
    int vol;
    string op;
    bool ownerNear;
    cout << "Smart Car VS v0.1f4 \nTo view list of commands type: \"Help\"" << endl;

    while (true)
    {
        if (op == "")
        {
            cout << "-> ";
        }
        getline(cin, op);

        clearConsole();

        if (op == "help" || op == "Help")
        {
            cout << "List of commands:\n"
                << "Set temperature\nGet temperature\nTurn conditioner on\nTurn conditioner off\n"
                << "Turn engine on\nTurn engine off\nEngine status\n"
                << "Set volume\nMedia status\nTurn media on\nTurn media off\n"
                << "Turn signal on\nTurn signal off\nSignal status\n"
                << "Car info\nDriver info\n"
                << "Help\n";
        }
        else if (op == "Set temperature")
        {
            cout << "Enter desired temperature: ";
            cin >> temp;
            Vent.set_temp(temp);
            cin.ignore();
        }
        else if (op == "Get temperature") {
            Vent.Status();
        }
        else if (op == "Turn conditioner on")
        {
            Vent.turnOn();
        }
        else if (op == "Turn conditioner off")
        {
            Vent.turnOff();
        }
        else if (op == "Turn engine on")
        {
            CarEngine.turnOn();
        }
        else if (op == "Turn engine off")
        {
            CarEngine.turnOff();
        }
        else if (op == "Engine status")
        {
            CarEngine.status();
        }
        else if (op == "Set volume")
        {
            cout << "Enter desired volume: ";
            cin >> vol;
            AudioSystem.SetVol(vol);
            cin.ignore();
        }
        else if (op == "Media status")
        {
            AudioSystem.Status();
        }
        else if (op == "Turn media on")
        {
            AudioSystem.turnOn();
        }
        else if (op == "Turn media off")
        {
            AudioSystem.turnOff();
        }
        else if (op == "Turn signal on")
        {
            CarSignal.turnOn();
        }
        else if (op == "Turn signal off")
        {
            CarSignal.turnOff();
        }
        else if (op == "Signal status")
        {
            CarSignal.status();
        }
        else if (op == "Car info")
        {
            CarInfo.CarInfo();
        }
        else if (op == "Driver info")
        {
            CarInfo.DriverInfo();
        }
        else if (op == "Quit" || op == "quit")
        {
            break;
        }
        else
        {
            cout << "Unknown command. Type 'Help' to see the list of commands.\n";
        }

        op = "";
        
    }

    return 0;
}
