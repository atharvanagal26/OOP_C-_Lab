#include<iostream>
using namespace std;
int main () 
{
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if (x<0)
    {
        cout<<x<<" is not a Automorphic numbre"<<endl;
        return 0;
    }

    int square = x*x;
    int temp = x;
    bool isAutomorphic = true;
    if (x == 0)
    {
        isAutomorphic = true;
    } else {
        while (temp > 0){
            if (temp % 10 != square % 10){
                isAutomorphic = false;
                break;
            }
            temp /= 10;
            square /= 10;
        }
    }

    if (isAutomorphic)
    {
        cout<<x<<" is a Automorphic Number"<<endl;
    } else {
        cout<<x<<" is not a Automorphic numbre"<<endl;
    }
    return 0;
}