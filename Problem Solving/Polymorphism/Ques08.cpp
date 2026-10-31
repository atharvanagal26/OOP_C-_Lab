#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int empId;
public:
    void getPersonData() {
        cout << "Enter Employee Name: ";
        cin >> ws; 
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
    void putPersonData() {
        cout << "Employee ID   : " << empId << "\n";
        cout << "Employee Name : " << name << "\n";
    }
};
class Professional : virtual public Person {
protected:
    double basicSalary;
    double allowance;
public:
    void getProfessionalData() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Allowance: ";
        cin >> allowance;
    }
    void putProfessionalData() {
        cout << "Basic Salary  : $" << basicSalary << "\n";
        cout << "Allowance     : $" << allowance << "\n";
    }
};
class Experience : virtual public Person {
protected:
    int yearsOfExp;
    string designation;
public:
    void getExperienceData() {
        cout << "Enter Years of Experience: ";
        cin >> yearsOfExp;
        cout << "Enter Designation: ";
        cin >> ws;
        getline(cin, designation);
    }
    void putExperienceData() {
        cout << "Designation   : " << designation << "\n";
        cout << "Experience    : " << yearsOfExp << " years\n";
    }
};
class EmployeeRecord : public Professional, public Experience {
    double totalSalary;
public:
    void getEmployeeData() {
        cout << "Enter Employee Details\n";
        getPersonData();
        getProfessionalData();
        getExperienceData();
    }
    void displayEmployeeRecord() {
        cout << "         EMPLOYEE DATABASE RECORD       \n";
        putPersonData(); // Displays the single unified instance of Person data
        putProfessionalData();
        putExperienceData();
        totalSalary = basicSalary + allowance;
        cout << "Total Salary  : $" << totalSalary << "\n";
    }
};
int main() {
    EmployeeRecord emp;
        emp.getEmployeeData();
    emp.displayEmployeeRecord();
    return 0;
}