#include "radio.h"

Radio::Radio(const std::string& name): GeneralDevice(name)
{
    cout << "Radio " << "'" << deviceName << "'"<< " wurde initialisiert." << std::endl;
}


Radio::~Radio() {
    cout << "Radio " << "'" << deviceName << "'" << " wurde initialisiert." << std::endl;
}

void Radio::increment() {
    volume++;
}

void Radio::decrement() {
    volume--;
}

std::string Radio::toString() {
    return deviceName + ": Lautstaerke - " + std::to_string(volume);
}

