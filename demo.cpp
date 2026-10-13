#include<iostream>
using namespace std;
class payment
{
    public:
    virtual void makePayment()
    {
        cout<<"Make a general payment"<<endl;
    }
};
class Credit:public payment
{
    public:
    void makePayment()
    {
        cout<<"Make a credit Payment"<<endl;
    }
};
class Upi:public payment
{
    public:
    void makePayment()
    {
        cout<<"Make a upi payment"<<endl;
    }
};
int main ()
{
    payment *p;
    Credit c;
    p=&c;
    p->makePayment();
    Upi u;
    p=&u;
    p->makePayment();
    p->payment::makePayment();
    return 0;
}