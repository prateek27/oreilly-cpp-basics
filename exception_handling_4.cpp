#include <iostream>
using namespace std;

void funcB() {
    throw "Error in funcB!";
}

void funcA() {
    funcB();  // Exception propagates to funcA
}

int main() {
    try {
        funcA();  // Exception propagates here
    } catch (const char* e) {
        cout << "Caught exception: " << e << endl;
    }

    return 0;
}