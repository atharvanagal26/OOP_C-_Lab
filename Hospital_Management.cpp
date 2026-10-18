#include <iostream>
#include <string>
using namespace std;
class Patient; // Forward declaration
class Hospital
{
public:
    void displayPatientID(const Patient& p);
};
class Patient
{
private:
    string name;
    int patientID;
    int age;
    string disease;
    static int patientCount;

public:
    // Constructor using this pointer
    Patient(string name, int patientID, int age, string disease)
    {
        this->name = name;
        this->patientID = patientID;
        this->age = age;
        this->disease = disease;

        patientCount++;
        cout << "Patient record created." << endl;  
    }
    // Inline member function
    inline void displayDetails()
    {
        cout << "\nPatient Details" << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
    }
    // Update disease information using this pointer
    void updateDisease(string newDisease)
    {
        this->disease = newDisease;
        cout << "\nDisease information updated." << endl;
    }
    // Static member function
    static void displayPatientCount()
    {
        cout << "\nTotal patient records created: "
             << patientCount << endl;
    }
    // Friend class declaration
    friend class Hospital;
    // Destructor
    ~Patient()
    {
        cout << "\nPatient object destroyed." << endl;
        patientCount--;
    }
};
// Definition of static data member
int Patient::patientCount = 0;
// Friend class accessing private data
void Hospital::displayPatientID(const Patient& p)
{
    cout << "\nAccessing private data through friend class:"
         << endl;
    cout << "Patient Name: " << p.name << endl;
    cout << "Patient ID: " << p.patientID << endl;
}
int main()
{
    Patient p1("Rahul", 101, 25, "Fever");

    p1.displayDetails();

    p1.updateDisease("Viral fever");
    p1.displayDetails();

    Patient::displayPatientCount();

    Hospital h1;
    h1.displayPatientID(p1);

    return 0;
}