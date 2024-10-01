#include <iostream>
using namespace std;


//Example 1 : Basic Exception Handling (Division By Zero)
int main() {
    int divisor, dividend, result;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero error!";
        }
        result = dividend / divisor;
        cout << "Result: " << result << endl;
    } catch (const char* e) {
        cout << "Exception: " << e << endl;
    }

    return 0;
}