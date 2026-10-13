#include<iostream>
using namespace std;

class Patient
{
    private:
    string name;
    int patientID;
    int age;
    string disease;

    public:
    Patient(string n, int id, int a, string d)
    {
        name = n;
        patientID = id;
        age = a;
        disease = d;

        cout<<endl<<"Patient record created."<<endl;
    }

    void displayDetails() 
    {
        cout<<"\n--- Patient Details ---"<<endl;
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Patient ID: "<<patientID<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Disease: "<<disease<<endl;
    }

    void updateDiseade(string newDisease)
    {
        disease = newDisease;
        cout<<"\nDisease information updated."<<endl;
    }

    ~Patient()
    {
        cout<<"\nPatient object destroyedd."<<endl;
        cout<<endl;
    }
};

int main () {
    Patient p1("Rahul",101,25,"Fever");

    p1.displayDetails();

    p1.updateDiseade("Viral fever");

    p1.displayDetails();

    return 0;
}