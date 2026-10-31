#include <iostream>
#include <string>
using namespace std;
class Order {
protected:
    string trackingNumber;
    double weightKg;
public:
    Order(string tracking, double weight) {
        trackingNumber = tracking;
        weightKg = weight;
    }
    virtual double calculateShippingCost() = 0;
    void printOrderDetails() const {
        cout << "Tracking ID : " << trackingNumber << "\n";
        cout << "Package Wt  : " << weightKg << " kg\n";
    }
    virtual ~Order() {
        cout << "Order " << trackingNumber << " archived.\n";
    }
};
class StandardOrder : public Order {
public:
    StandardOrder(string tracking, double weight) : Order(tracking, weight) {}

    double calculateShippingCost() override {
        return 5.00 + (weightKg * 2.00);
    }
};
class ExpressOrder : public Order {
public:
    ExpressOrder(string tracking, double weight) : Order(tracking, weight) {}
    double calculateShippingCost() override {
        return 15.00 + (weightKg * 4.50);
    }
};
int main() {
    Order* order1 = new StandardOrder("TRK-101", 3.0);
    Order* order2 = new ExpressOrder("TRK-202", 1.5);
    cout << "--- Standard Order Summary ---\n";
    order1->printOrderDetails();
    cout << "Shipping Fee: $" << order1->calculateShippingCost() << "\n\n";
    cout << "--- Express Order Summary ---\n";
    order2->printOrderDetails();
    cout << "Shipping Fee: $" << order2->calculateShippingCost() << "\n";
    cout << "\n--- Cleaning Up Resources ---\n";
    delete order1;
    delete order2;
    return 0;
}