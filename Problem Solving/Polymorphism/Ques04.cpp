// https://www.geeksforgeeks.org/cpp/virtual-base-class-in-c/
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;
public:
    void setRollNumber(int r) {
        rollNumber = r;
    }
    void printRollNumber() {
        cout << "Roll Number: " << rollNumber << "\n";
    }
};

class Test : virtual public Student {
protected:
    float math, physics;
public:
    void setMarks(float m, float p) {
        math = m;
        physics = p;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void setScore(float s) {
        score = s;
    }
};

class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = math + physics + score;
        printRollNumber(); // Accessible directly without ambiguity error
        cout << "Math Marks: " << math << "\n";
        cout << "Physics Marks: " << physics << "\n";
        cout << "Sports Score: " << score << "\n";
        cout << "Total Combined Score: " << total << "\n";
    }
};

int main() {
    Result student1;
    
    student1.setRollNumber(101);
    student1.setMarks(88.5, 92.0);
    student1.setScore(95.5);
    
    student1.display();

    return 0;
}