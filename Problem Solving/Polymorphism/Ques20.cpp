#include <iostream>
#include <string>
using namespace std;

class Appliance {
protected:
    string brandName;

public:
    Appliance(string brand) {
        brandName = brand;
    }

    virtual void operate() {
        cout << brandName << " appliance is running standard diagnostics.\n";
    }

    virtual ~Appliance() {
        cout << brandName << " appliance disconnected.\n";
    }
};

class WashingMachine : public Appliance {
private:
    int drumCapacityKg;

public:
    WashingMachine(string brand, int capacity) : Appliance(brand), drumCapacityKg(capacity) {}

    void operate() override {
        cout << "[Washing Machine] " << brandName << " (" << drumCapacityKg 
             << "kg): Filling drum with water and spinning.\n";
    }
};

class MicrowaveOven : public Appliance {
private:
    int powerWatts;

public:
    MicrowaveOven(string brand, int power) : Appliance(brand), powerWatts(power) {}

    void operate() override {
        cout << "[Microwave] " << brandName << " (" << powerWatts 
             << "W): Activating magnetron and heating food.\n";
    }
};
int main() {
    // Base class pointers holding addresses of derived objects (Upcasting)
    Appliance* device1 = new WashingMachine("Whirlpool", 8);
    Appliance* device2 = new MicrowaveOven("Samsung", 1000);

    cout << "--- Invoking Methods via Base Class Pointers ---\n";
    
    device1->operate(); // Calls WashingMachine::operate()
    device2->operate(); // Calls MicrowaveOven::operate()

    cout << "\n--- Cleaning Up Resources ---\n";
    delete device1;
    delete device2;

    return 0;
}