#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
    virtual void calculateInterest() = 0;
    void displayBalance() {
        cout << "Account No: " << accountNumber << " | Current Balance: $" << balance << "\n";
    }
    virtual ~BankAccount() {
        cout << "Account " << accountNumber << " closed.\n";
    }
};
class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(string accNum, double balance, double rate) 
        : BankAccount(accNum, balance), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * (interestRate / 100.0);
        balance += interest;
        cout << "Savings Interest Added: $" << interest << ". New Balance: $" << balance << "\n";
    }
};
class CheckingAccount : public BankAccount {
public:
    CheckingAccount(string accNum, double balance) 
        : BankAccount(accNum, balance) {}

    void calculateInterest() override {
        cout << "Checking Account: No interest accrued on standard checking.\n";
    }
};

int main() {
    BankAccount* acc1 = new SavingsAccount("SAV-501", 10000.0, 4.5);
    BankAccount* acc2 = new CheckingAccount("CHK-302", 2500.0);

    acc1->displayBalance();
    acc1->calculateInterest(); 
    cout << "\n";
    acc2->displayBalance();
    acc2->calculateInterest(); 
    cout << "\nCleaning Up Resources\n";
    delete acc1;
    delete acc2;
    return 0;
}