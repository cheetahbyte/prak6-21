#ifndef HEATER_H
#define HEATER_H
#include "generaldevice.h"

class Heater: public GeneralDevice
{
public:
    Heater(const std::string& name);
    ~Heater();

    void increment() override;
    void decrement() override;

    std::string toString() override;

private:
    int temperature = 21;
};

#endif // HEATER_H
