// Voting 
#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    try 
    {
        if(age<18)
        {
            throw runtime_error("You are not eligible to vote");
        }
        cout<<"You are eligible to vote"<<endl;
    }
    catch(const runtime_error& e)
    {
        cout<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}