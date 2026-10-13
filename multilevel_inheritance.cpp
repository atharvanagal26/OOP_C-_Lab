// Chian: Grandparent-> Parent -> Child

#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};
class Puppy : public Dog
{
public:
    void cry()
    {
        cout << "Puppy cries" << endl;
    }
};
int main()
{
    Puppy p;

    p.eat();
    p.bark();
    p.cry();

    return 0;
}