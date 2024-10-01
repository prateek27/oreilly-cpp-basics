#include <iostream>
#include <stdexcept>
#include <vector> 
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};  // Create a vector of integers

    int index = 11;

    try {
        // Attempt to access the element at the given index using the `at()` method
        cout << "The value at index " << index << " is: " << numbers.at(index) << endl;
    } catch (const out_of_range& e) {
        // Handle out_of_range exception thrown by `at()` method
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
