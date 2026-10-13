#include<iostream>
using namespace std;
int main () {
    float C,F;
    cout<<"Enter temp in cel : ";
    cin>>C;
    F = (C*9.0/5.0)+32;
    cout<<C<<" deg cel = "<<F<<" deg far"<<endl;
    return 0;
}