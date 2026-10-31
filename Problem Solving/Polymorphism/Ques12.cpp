#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << "\n";
    }
};
class Student : virtual public Person {
protected:
    float gpa;
public:
    void setGpa(float g) {
        gpa = g;
    }
    void displayGpa() {
        cout << "GPA: " << gpa << "\n";
    }
};
class Teacher : virtual public Person {
protected:
    string subject;
public:
    void setSubject(string s) {
        subject = s;
    }
    void displaySubject() {
        cout << "Teaching Subject: " << subject << "\n";
    }
};
class TeachingAssistant : public Student, public Teacher {
public:
    void displayProfile() {
        cout << "      TEACHING ASSISTANT PROFILE        \n";
        displayName(); // Accessible cleanly without ambiguity
        displayGpa();
        displaySubject();
    }
};
int main() {
    TeachingAssistant ta;
    ta.setName("Alex Turner");
    ta.setGpa(3.91);
    ta.setSubject("Object-Oriented Programming");
    ta.displayProfile();
    return 0;
}