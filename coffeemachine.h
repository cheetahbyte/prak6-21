#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include "generaldevice.h"

class CoffeeMachine: public GeneralDevice
{
public:
    CoffeeMachine(const std::string& name);
    ~CoffeeMachine();

    void increment() override;
    void decrement() override;

    std::string toString() override;
private:
    int numberOfCups = 0;
};

#endif // COFFEEMACHINE_H
