// https://www.geeksforgeeks.org/abstract-classes-in-cpp/
#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual ~Vehicle() {
        cout << "Vehicle destructor called.\n";
    }
};
class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine started: Vroom! Key turned.\n";
    }
    ~Car() {
        cout << "Car destructor called.\n";
    }
};
class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Bike engine started: Kick start engaged!\n";
    }
    ~Bike() {
        cout << "Bike destructor called.\n";
    }
};
int main() {
    Vehicle* myCar = new Car();
    Vehicle* myBike = new Bike();
    myCar->startEngine();  // Output: Car engine started
    myBike->startEngine(); // Output: Bike engine started
    delete myCar;
    delete myBike;
    return 0;
}