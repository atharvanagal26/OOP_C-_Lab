// One Parent Many Childrens

#include <iostream>
using namespace std;
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle starts" << endl;
    }
};
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }
};
class Bike : public Vehicle
{
public:
    void ride()
    {
        cout << "Bike is riding" << endl;
    }
};
int main()
{
    Car c;
    Bike b;

    c.start();
    c.drive();

    b.start();
    b.ride();

    return 0;
}