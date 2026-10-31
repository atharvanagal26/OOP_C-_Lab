#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calculateArea() {
        cout << "Base Shape area calculation (undefined).\n";
        return 0.0;
    }
    virtual ~Shape() {
        cout << "Shape destructor called.\n";
    }
};

// Derived Class 1: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }

    ~Circle() {
        cout << "Circle destructor called.\n";
    }
};

// Derived Class 2: Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called.\n";
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    cout << "Area of Circle: " << shape1->calculateArea() << "\n";
    cout << "Area of Rectangle: " << shape2->calculateArea() << "\n";

    delete shape1;
    delete shape2;

    return 0;
}