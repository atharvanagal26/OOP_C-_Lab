#include<iostream>
using namespace std;

class Person
{
    public:
    virtual void displayDetails()
    {
        cout<<"Genaral person details"<<endl;
    }
};

class Doctor:public Person
{
    public:
    virtual void displayDetails()
    {
        cout<<"Doctor: Treats patients"<<endl;
    }
};

class Nurse:public Person
{
    public:
    void displayDetails()
    {
        cout<<"Nurse: Takes care of patients"<<endl;
    }
};

class Patient:public Person
{
    public:
    void displayDetails()
    {
        cout<<"Patient: Receives treatment"<<endl;
    }
};
int main ()
{
    Person *p;

    Doctor d;
    p=&d;
    p->displayDetails();

    Nurse n;
    p=&n;
    p->displayDetails();

    Patient pt;
    p=&pt;
    p->displayDetails();

    p->Person::displayDetails();

    return 0;
}