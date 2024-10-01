#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0) {
            throw "Negative number exception!";
        } else if (number == 0) {
            throw 0;  // Throwing an integer exception
        }
        cout << "You entered: " << number << endl;
    } catch (const char* e) {
        cout << "Exception: " << e << endl;  // Catching string exceptions
    } catch (int e) {
        cout << "Exception: Division by zero-like error, you entered zero!" << endl;  // Catching integer exceptions
    }

    return 0;
}