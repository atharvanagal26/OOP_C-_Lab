#include<iostream>
using namespace std;

class student {
    private: 
    string name;
    int age;
    float markes;

    public:
    // Default constructor
    student() 
    {
        name = "Atharv";
        age = 15;
        markes = 67.4;
    }

    // Parametric constructor
    student(string n, int a, float m)
    {
        name = n;
        age = a;
        markes = m;
    }

    // Copy constructor
    student(const student &s)
    {
        name = s.name;
        age = s.age;
        markes = s.markes;
    }

    void setData(string n, int a, float m)
    {
        name = n;
        age = a;
        markes = m;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<markes<<endl;
    }

    char getGrade()
    {
        if(markes >= 90)
            return 'A';
        else if(markes >=75)
            return 'B';
        else if(markes >= 60)
            return 'C';
        else return 'D';
    }
};

int main () {
    student s1;
    cout<<"Student 1: "<<endl;
    s1.display();

    cout<<"\nStudent 2: "<<endl;
    student s2("Rahul",20,85);
    s2.display();
    cout<<"Grade: "<<s2.getGrade()<<endl;

    cout<<"\nStudent 3: "<<endl;

    student s3(s2);
    s3.display();

    cout<<"Grade: "<<s3.getGrade()<<endl;
    return 0;
}