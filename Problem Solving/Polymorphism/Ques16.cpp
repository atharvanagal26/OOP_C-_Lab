#include <iostream>
#include <string>
using namespace std;

class EmployeeBase {
protected:
    int id;
    string name;

public:
    EmployeeBase(int empId, string empName) : id(empId), name(empName) {}

    void displayBaseInfo() const {
        cout << "Employee ID   : " << id << "\n";
        cout << "Employee Name : " << name << "\n";
    }
};
class PersonalRecord : virtual public EmployeeBase {
protected:
    string address;
    string phone;
public:
    PersonalRecord(int id, string name, string addr, string ph) 
        : EmployeeBase(id, name), address(addr), phone(ph) {}

    void displayPersonalInfo() const {
        cout << "Address       : " << address << "\n";
        cout << "Phone         : " << phone << "\n";
    }
};

class ProfessionalRecord : virtual public EmployeeBase {
protected:
    string department;
    double salary;
public:
    ProfessionalRecord(int id, string name, string dept, double sal) 
        : EmployeeBase(id, name), department(dept), salary(sal) {}
    void displayProfessionalInfo() const {
        cout << "Department    : " << department << "\n";
        cout << "Salary        : $" << salary << "\n";
    }
};
class CompleteEmployeeRecord : public PersonalRecord, public ProfessionalRecord {
public:
    CompleteEmployeeRecord(int id, string name, string addr, string ph, string dept, double sal)
        : EmployeeBase(id, name), // Directly invokes virtual base constructor
          PersonalRecord(id, name, addr, ph),
          ProfessionalRecord(id, name, dept, sal) {}

    void displayCompleteRecord() const {
        cout << "       COMPLETE EMPLOYEE DATABASE       \n";
        displayBaseInfo();         // Pulled from the single, shared EmployeeBase instance
        displayPersonalInfo();     // Personal branch details
        displayProfessionalInfo(); // Professional branch details
    }
};

int main() {
    CompleteEmployeeRecord emp(
        101, 
        "Sarah Jenkins", 
        "42 Silicon Valley, CA", 
        "555-0192", 
        "Artificial Intelligence Lab", 
        115000.0
    );
    emp.displayCompleteRecord();
    return 0;
}