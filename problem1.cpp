#include<iostream>
using namespace std;
class SY {
    int prn;
    char name[20];
    public :
    void get (); //{ //Function defined inside a class
    //     cout<<"Enter PRN: ";
    //     cin>>prn;
    //     cout<<"Enter Name: ";
    //     cin>>name;
    // }
    void display ();//{
    //     cout<<"PRN : "<<prn<<endl;
    //     cout<<"Name : "<<name<<endl;
    // }
};

void SY::get () { //Function defined outside a class
        cout<<"Enter PRN: ";
        cin>>prn;
        cout<<"Enter Name: ";
        cin>>name;
    }
void SY :: display () {
        cout<<"PRN : "<<prn<<endl;
        cout<<"Name : "<<name<<endl;
    }
int main () {
    SY abc;
    abc.get();
    abc.display();
    return 0;
}