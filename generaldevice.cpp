#include <generaldevice.h>

GeneralDevice::GeneralDevice(const std::string& name): deviceName(name) {
    cout << "Basisgerät von  " << "'" << name << "'" << " wurde initialisiert." << std::endl;
}

GeneralDevice::~GeneralDevice() {
    cout << "Basisgerät von " << "'" << deviceName << "'" << " wurde zerstört." << std::endl;
}


string GeneralDevice::getDeviceName() {
    return deviceName;
}


string GeneralDevice::toString() {
    return "GeneralDevice";
}
