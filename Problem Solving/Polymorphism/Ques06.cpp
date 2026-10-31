// https://www.geeksforgeeks.org/abstract-classes-in-cpp/
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string empName, int empId) {
        name = empName;
        id = empId;
    }

    virtual double calculateSalary() = 0;

    void displayInfo() {
        cout << "Employee ID: " << id << "\n";
        cout << "Employee Name: " << name << "\n";
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
    double monthlySalary;

public:
    FullTimeEmployee(string name, int id, double salary) : Employee(name, id) {
        monthlySalary = salary;
    }

    double calculateSalary() override {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(string name, int id, double rate, int hours) : Employee(name, id) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* emp1 = new FullTimeEmployee("Alice Smith", 101, 5500.0);
    Employee* emp2 = new PartTimeEmployee("Bob Jones", 102, 30.0, 75);

    cout << "Full-Time Employee Record\n";
    emp1->displayInfo();
    cout << "Calculated Salary: $" << emp1->calculateSalary() << "\n\n";

    cout << "Part-Time Employee Record\n";
    emp2->displayInfo();
    cout << "Calculated Salary: $" << emp2->calculateSalary() << "\n";

    delete emp1;
    delete emp2;

    return 0;
}