#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout<<"Forward traversal : ";

    for(int x: numbers)
    {
        cout<<x<<" ";
    }

    cout<<"\nBackward traversal : ";

    for(auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        cout<<*it<<" ";
    }

    return 0;
}