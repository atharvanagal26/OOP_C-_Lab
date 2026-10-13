#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age;

    public:
    student(string n, int a){
        name = n;
        age = a;
        cout<<"Contructor called"<<endl;
    }

    void display() 
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student age: "<<age<<endl;
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main () {
    student s1("Rahul",20);
    s1.display();
}