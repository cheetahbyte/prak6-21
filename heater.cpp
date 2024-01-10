#include "heater.h"

Heater::Heater(const std::string& name): GeneralDevice(name)
{
    cout << "Heizung " << "\'" << name << "\'" << " wurde initialisiert." << std::endl;
}

Heater::~Heater() {
    cout << "Heizung " << "'" << deviceName << "'" << " wurde initialisiert." << std::endl;
}

void Heater::increment() {
    temperature++;
}

void Heater::decrement() {
    temperature--;
}


std::string Heater::toString() {
    return deviceName + ": Temperatur - " + std::to_string(temperature);
}
