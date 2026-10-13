#include<iostream>
using namespace std;
class Number
{
    public:
    int value;
    Number ()
    {
        value=0;
    }

    Number(int v)
    {
        value=v;
    }
    Number operator+(const Number &obj)
    {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    void display()
    {
        cout<<"Value is: "<<value<<endl;
    }
};

int main ()
{
    Number n1;
    Number n2(40);
    Number n3(60);

    Number n4 = n2 + n3;

    n1.display();
    n2.display();
    n3.display();
    n4.display();
    
    return 0;
}