#include<iostream>
using namespace std;
int main () {
    int a,b,temp;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"Before swap : a = "<<a<<", b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swap : a = "<<a<<", b = "<<b<<endl;
    return 0;
}