// https://www.geeksforgeeks.org/cpp/virtual-functions-and-runtime-polymorphism-in-cpp/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a generic sound.\n";
    }

    virtual ~Animal() {
        cout << "Base class (Animal) destroyed.\n";
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof! Woof!\n";
    }

    ~Dog() {
        cout << "Derived class (Dog) destroyed.\n";
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow~ Meow~\n";
    }

    ~Cat() {
        cout << "Derived class (Cat) destroyed.\n";
    }
};

int main() {
    Animal* ptr1 = new Dog();
    Animal* ptr2 = new Cat();

    ptr1->sound(); // Output: Dog barks
    ptr2->sound(); // Output: Cat meows

    delete ptr1;
    delete ptr2;

    return 0;
}