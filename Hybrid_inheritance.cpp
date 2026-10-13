// combination of two or more types of inheritance

#include <iostream>
using namespace std;
class Person
{
public:
    void showPerson()
    {
        cout << "I am a person" << endl;
    }
};
class Student : public Person
{
public:
    void study()
    {
        cout << "I study" << endl;
    }
};
class Employee : public Person
{
public:
    void work()
    {
        cout << "I work" << endl;
    }
};
class Intern : public Student, public Employee
{
public:
    void training()
    {
        cout << "I am doing training" << endl;
    }
};
int main()
{
    Intern i;

    i.study();
    i.work();
    i.training();

    return 0;
}