#include<iostream>
using namespace std;
void add()
{
     int a,b;
     cout<<"Enter two number: ";
     cin>>a>>b;
     cout<<"Add: "<<a+b<<endl;
}
int add(int a, int b)
{
    return a+b;
}
int add(int a , int b , int c)
{
    return  a+b+c;
}
double add(double a, double b)
{
    return a+b;
}
int main ()
{
    add();
    cout<<"Add: "<<add(10,20)<<endl;
    cout<<"Add: "<<add(10,20,30)<<endl;
    cout<<"Add: "<<add(10.5,20.)<<endl;
    return 0;
}