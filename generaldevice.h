#ifndef GENERALDEVICE_H
#define GENERALDEVICE_H
#include <string>
using namespace std;
#include <iostream>

class GeneralDevice {
protected:
    std::string deviceName;
public:
    GeneralDevice(const std::string& name);
    virtual ~GeneralDevice();

    virtual void increment(){}
    virtual void decrement(){}

    string getDeviceName();

    void setDeviceName(const std::string &newDeviceName);

    virtual string toString();
};

#endif // GENERALDEVICE_H
