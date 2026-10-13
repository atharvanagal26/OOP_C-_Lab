#include<iostream>
using namespace std;
int main () 
{
    int x;
    cout<<"Enter number : ";
    cin>>x;

    if (x < 0)
    {
        cout<<x<<" is not a Armstrong number"<<endl;
        return 0;
    }
    
    int n = 0;
    int temp = x;
    while (temp > 0)
    {
        n++;
        temp /= 10;
    }
    if (x == 0) n=1;

    int total_sum = 0;
    temp = x;
    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i<n; i++)
        {
            power *= digit;
        }

        total_sum += power;
        temp /= 10;
    }

    if(total_sum == x)
    {
        cout<<x<<" is an Armstrong number"<<endl;
    } else {
        cout<<x<<" is not a Armstrong number"<<endl;

    }
    return 0;
}