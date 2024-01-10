#include "coffeemachine.h"
#include "radio.h"
#include "heater.h"
#include <vector>

void submenu(GeneralDevice* dev);

void menu(vector<GeneralDevice*> devs);

int main()
{
    GeneralDevice* currentDevice = nullptr;
    std::vector<GeneralDevice*> devices;

    devices.push_back(new CoffeeMachine("Tchibo KM 3"));
    devices.push_back(new Radio("Radio WZ"));
    devices.push_back(new Radio("Radio Küche"));
    devices.push_back(new Heater("Heizung OG"));
    devices.push_back(new Heater("Heizung EG"));


    // display menu
    menu(devices);

    return 0;
}

void menu(vector<GeneralDevice*> devices) {
    cout << endl <<"Smart Home Remote Control" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Geräteanweisungen" << endl;
    cout << "+ \t laut/warm/..." << endl;
    cout << "- \t leise/kalt/..." << endl;
    cout << "-----------------------------------" << endl;
    cout << "Verfügbare Geräte (" << to_string(devices.size()) << " online)" << endl;

    for (int i = 1; i <= (int)devices.size(); i++) {
        cout << to_string(i) << " \t " << devices[i-1]->getDeviceName() << endl;
    }

    cout << "-----------------------------------" << endl;

    cout << "? \t Gerätestatus" << endl;

    bool menuRunning = true;
    while (menuRunning) {
        char input;
        cout << "Eingabe > ";
        cin >> input;
        switch (input) {
            // switching for individual cases does not matter, because all devices implement exactly the same methods.
        case '1': 
        case '2': 
        case '3':
        case '4':
        case '5':
            cout << "Gerät " << input - '0' << " gewählt." << endl << "Geräteinfo: "<< endl << endl;
            submenu(devices.at(input - '0' -1)); break;
        case '?': cout <<  "Option ?" << endl; break;
        case 'x': cout << "Bye" << endl; menuRunning=false; break;
        default: cout << "Bitte gib eine valide Option an!" << endl; break;
        }
    }
}

void submenu(GeneralDevice* dev) {
    cout << dev->toString();
}
