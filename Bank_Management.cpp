#include<iostream>
using namespace std;

class BankAccount
{
    private:
    string accountHolder;
    int accountNo;
    float balance;

    public:
    BankAccount(string name, int number, float amount)
    {
        accountHolder = name;
        accountNo = number;
        balance = amount;

        cout<<"Account creadited successfully"<<endl;
    }

    void deposite(float amount)
    {
        balance = balance + amount;
        cout<<"Amount deposited Rs. :"<<amount<<endl;
    }

    void display()
    {
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Account number: "<<accountNo<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }

    ~BankAccount() 
    {
        cout<<"Account object destroy."<<endl;
    }
};

int main ()  {
    BankAccount account("Rahul", 12345, 10000);

    account.deposite(5000);
    account.display();

    return 0;
}