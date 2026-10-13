#include <iostream>
#include <string>
using namespace std;

class GymMember
{
public:
    int memberId;
    string name;
    int fee;
    static int count;

    // Constructor
    GymMember(int id, string n, int f)
    {
        this->memberId = id;  // Using this pointer
        this->name = n;
        this->fee = f;
        count++;
    }

    // Static function
    static void showCount()
    {
        cout << "Total Members: " << count << endl;
    }

    // Inline function demonstrating reference
    inline void display()
    {
        int &id = memberId;  // Reference to memberId
        cout << "Member ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Membership Fee: " << fee << endl;
    }
};

// Initialize static variable
int GymMember::count = 0;

int main()
{
    GymMember g1(101, "Rahul", 1500);
    GymMember g2(102, "Ram", 2000);
    GymMember g3(103, "Amit", 1800);

    // Pointer to a GymMember object
    GymMember* ptr = &g1;

    cout << "Accessing member using pointer:" << endl;
    cout << "Member ID: " << ptr->memberId << endl;
    cout << "Name: " << ptr->name << endl;

    cout << "\nAll Gym Members:\n" << endl;

    g1.display();
    cout << endl;

    g2.display();
    cout << endl;

    g3.display();
    cout << endl;

    GymMember::showCount();

    return 0;
}