#include "coffeemachine.h"

CoffeeMachine::CoffeeMachine(const std::string& name): GeneralDevice(name)  {
    cout << "Kaffeemaschine " << "'" << name << "'" << " wurde initialisiert." << std::endl;
}

CoffeeMachine::~CoffeeMachine()  {
    cout << "Kaffeemaschine " << "'" << deviceName << "'" << " wurde zerstört." << std::endl;
}

void CoffeeMachine::increment() {
    numberOfCups++;
}

void CoffeeMachine::decrement() {
    numberOfCups--;
}

std::string CoffeeMachine::toString(){
    return deviceName + ": Cups - " + std::to_string(numberOfCups);
}
