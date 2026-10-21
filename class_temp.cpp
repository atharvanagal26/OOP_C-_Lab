#include<iostream>
using namespace std;
template<class T>
class calculator
{
    T a,b;

    public:
    calculator(T x, T y)
    {
        a=x;
        b=y;
    }

    T add()
    {
        return a+b;
    }

    T multiply()
    {
        return a*b;
    }
};

int main ()
{
    calculator<int>c1(10,20);
    cout<<"Integer Addition : "<<c1.add()<<endl;
    cout<<"Integer Multiplication : "<<c1.multiply()<<endl;

    calculator<double>c2(2.5,4.0);
    cout<<"Double Addition : "<<c2.add()<<endl;
    cout<<"Double Multiplication : "<<c2.multiply()<<endl;

    return 0;
}