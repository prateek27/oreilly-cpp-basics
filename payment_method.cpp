#include <iostream>

using namespace std;

// Abstract Base class
class Card {
public:
    virtual void payMethod() const = 0;

    virtual ~Card() {} // Virtual destructor for proper cleanup of derived class objects
};

// Derived class for DebitCard
class DebitCard : public Card {
public:
    void payMethod() const{
        cout << "Processing payment using Debit Card..." << endl;
    }
};

// Derived class for CreditCard
class CreditCard : public Card {
public:
    void payMethod() const {
        cout << "Processing payment using Credit Card..." << endl;
    }
};

// Function that accepts any type of Card
void processPayment(const Card& card) {
    card.payMethod(); // Polymorphic call based on the actual object type
}

int main() {
    DebitCard myDebitCard;
    CreditCard myCreditCard;

    cout << "Payment with Debit Card: ";
    processPayment(myDebitCard); // Calls DebitCard's payMethod()

    cout << "Payment with Credit Card: ";
    processPayment(myCreditCard); // Calls CreditCard's payMethod()

    return 0;
}