#include <iostream>
#include <string>
using namespace std;
class StaffMember {
protected:
    int staffId;
    string fullName;
public:
    StaffMember(int id, string name) : staffId(id), fullName(name) {}
    void displayStaffBase() const {
        cout << "Staff ID      : " << staffId << "\n";
        cout << "Full Name     : " << fullName << "\n";
    }
};
class AdministrativeRole : virtual public StaffMember {
protected:
    string officeRoom;
    string department;
public:
    AdministrativeRole(int id, string name, string room, string dept) 
        : StaffMember(id, name), officeRoom(room), department(dept) {}
    void displayAdminInfo() const {
        cout << "Office Room   : " << officeRoom << "\n";
        cout << "Department    : " << department << "\n";
    }
};
class AcademicRole : virtual public StaffMember {
protected:
    int coursesTaught;
    int researchPapers;
public:
    AcademicRole(int id, string name, int courses, int papers) 
        : StaffMember(id, name), coursesTaught(courses), researchPapers(papers) {}
    void displayAcademicInfo() const {
        cout << "Courses Taught: " << coursesTaught << "\n";
        cout << "Research Pubs : " << researchPapers << "\n";
    }
};
class FacultyMember : public AdministrativeRole, public AcademicRole {
public:
    FacultyMember(int id, string name, string room, string dept, int courses, int papers)
        : StaffMember(id, name), // Directly invokes virtual base constructor
          AdministrativeRole(id, name, room, dept),
          AcademicRole(id, name, courses, papers) {}
    void displayCompleteFacultyRecord() const {
        cout << "       UNIVERSITY FACULTY DATABASE      \n";
        displayStaffBase();  // Pulled cleanly from the single, shared StaffMember instance
        displayAdminInfo();  // Administrative branch details
        displayAcademicInfo();// Academic branch details
    }
};
int main() {
    FacultyMember prof(
        405, 
        "Dr. Eleanor Vance", 
        "Science Hall 302", 
        "Computer Science", 
        4, 
        18
    );
    prof.displayCompleteFacultyRecord();
    return 0;
}