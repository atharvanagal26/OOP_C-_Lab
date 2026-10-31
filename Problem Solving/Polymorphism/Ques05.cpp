// https://www.geeksforgeeks.org/cpp/base-class-pointer-pointing-to-derived-class-object-in-cpp/
#include <iostream>
using namespace std;
class Employee {
public:
    void work() {
        cout << "Employee is handling general office tasks.\n";
    }
};
// Derived Class
class Manager : public Employee {
public:
    void work() {
        cout << "Manager is leading team meetings and reviewing project sprints.\n";
    }
    void conductInterview() {
        cout << "Manager is conducting a candidate interview.\n";
    }
};
int main() {
    Employee* empPtr; 
    Manager mgrObj;   
    empPtr = &mgrObj; 
    cout << "Calling via Base Class Pointer\n";
    empPtr->work();  
    return 0;
}