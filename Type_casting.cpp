#include<iostream>
using namespace std;

class Payment
{
    public :
    virtual void makePayment()
    {
        cout<<"Payment is being processed"<<endl; 
    }
    virtual ~Payment() = default;
};
class Credit : public Payment 
{
    public:
    void makePayment() override
    {
        cout<<"Payment made using Credit Card"<<endl;
    }
void displayCreditDetails()
{
    cout<<"Credit Card payment details displayed"<<endl;
}
};
int main()
{
    Credit c;
    Payment* ptr = &c;
    ptr->makePayment();
    Credit* cptr = dynamic_cast<Credit*>(ptr);

    if(cptr != nullptr)
    {
        cout<<"Dynamic casting successful"<<endl;
        cptr->displayCreditDetails();
    }
    else{
        cout<<"Dynamic casting failed"<<endl;
    }
    return 0;
}