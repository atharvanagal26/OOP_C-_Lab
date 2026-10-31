// https://www.geeksforgeeks.org/cpp/pure-virtual-functions-and-abstract-classes/
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {
        cout << "Shape destroyed.\n";
    }
};
// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle.\n";
    }
    ~Circle() {
        cout << "Circle destroyed.\n";
    }
};
// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle.\n";
    }
    ~Rectangle() {
        cout << "Rectangle destroyed.\n";
    }
};
int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    s1->draw(); // Output: Drawing a Circle.
    s2->draw(); // Output: Drawing a Rectangle.
    delete s1;
    delete s2;
    return 0;
}