#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment(double amount) = 0;

    virtual ~PaymentGateway() {
        cout << "PaymentGateway session closed.\n";
    }
};

// Derived Class 1
class CreditCardPayment : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Successfully processed $" << amount << " via Credit Card.\n";
    }
};

// Derived Class 2
class UPIPayment : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Successfully processed $" << amount << " via UPI Instant Transfer.\n";
    }
};

int main() {
    PaymentGateway* method1 = new CreditCardPayment();
    PaymentGateway* method2 = new UPIPayment();

    method1->processPayment(250.50); 
    method2->processPayment(75.20);  

    delete method1;
    delete method2;

    return 0;
}