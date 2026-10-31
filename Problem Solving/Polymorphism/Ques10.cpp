#include <iostream>
#include <string>
using namespace std;
class SmartDevice {
protected:
    string deviceName;
public:
    SmartDevice(string name) {
        deviceName = name;
    }
    virtual void turnOn() = 0;
    void displayStatus() {
        cout << "[System Check] Device '" << deviceName << "' is connected.\n";
    }
    virtual ~SmartDevice() {
        cout << "Destroying device: " << deviceName << "\n";
    }
};
class SmartLight : public SmartDevice {
public:
    SmartLight(string name) : SmartDevice(name) {}
    void turnOn() override {
        cout << deviceName << " -> Lights illuminated at 100% brightness.\n";
    }
};
class SmartThermostat : public SmartDevice {
public:
    SmartThermostat(string name) : SmartDevice(name) {}
    void turnOn() override {
        cout << deviceName << " -> HVAC system activated. Target set to 22°C.\n";
    }
};
int main() {
    SmartDevice* device1 = new SmartLight("Living Room Light");
    SmartDevice* device2 = new SmartThermostat("Main Hall AC");
    device1->displayStatus();
    device1->turnOn(); 
    cout << "\n";
    device2->displayStatus();
    device2->turnOn(); 
    delete device1;
    delete device2;
    return 0;
}