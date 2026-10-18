#include<iostream>
#include<utility>
#include<string>
using namespace std;
int main ()
{
    string str1 = "Hello, c++ Programming!";
    cout<<"Before moving: "<<endl;
    cout<<"Str1 = "<<str1<<endl;
    
    string str2 = std::move(str1);

    cout<<"\nAfter Moving: "<<endl;
    cout<<"Str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;

    return 0;
}