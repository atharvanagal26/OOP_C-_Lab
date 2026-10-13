#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main () 
{
    int a,b;
    a = 10,b=20;
    
    // int *p;
    // p=&a;
    // cout<<"value of a: "<<a<<endl;
    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Value of p: "<<p<<endl;
    // cout<<"Address of p: "<<&p<<endl;
    // cout<<"Value of a by using pointer p: "<<*p;

    // swaping
    cout<<"Value of a="<<a<<" and value of b="<<b<<endl;
    swap(&a,&b);
    cout<<"after swaping"<<endl;
    cout<<"value of a="<<a<<" and value of b="<<b<<endl;
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}