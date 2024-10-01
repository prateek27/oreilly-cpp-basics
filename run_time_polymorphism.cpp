#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() {  // Make it Virtual function
        cout << "Base class show() function called." << endl;
    }
};

class Derived : public Base {
public:
    void show(){  // Override the base class function
        cout << "Derived class show() function called." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    Base baseObj;

    basePtr = &derivedObj;  // Base class pointer pointing to Derived class object

    basePtr->show();  
    basePtr = &baseObj;
    basePtr->show(); // Base  class's show() method due to runtime polymorphism

    return 0;
}