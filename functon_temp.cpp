#include<iostream>
using namespace std;
template<class T>
T add(T a, T b)
{
    return a+b;
}

int main ()
{
    cout<<"Integer Addition : ";
    cout<<add(10,20)<<endl;
    cout<<"Float Addition : ";
    cout<<add(5.2F,5.6F)<<endl;
    cout<<"Double Addition : ";
    cout<<add(36.2,16.7)<<endl;
    return 0;
}