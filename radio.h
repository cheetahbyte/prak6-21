#ifndef RADIO_H
#define RADIO_H
#include "generaldevice.h"

class Radio: public GeneralDevice
{
public:
    Radio(const std::string& name);
    ~Radio();

    void increment() override;
    void decrement() override;

    std::string toString() override;
private:
    int volume = 0;
};

#endif // RADIO_H
