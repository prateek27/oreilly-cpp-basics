#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements using the index operator []
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;
    cout << "Third element: " << numbers[2] << endl;

    // Size of the vector
    cout << "Size of vector: " << numbers.size() << endl;

    // Iterate over the vector using a for loop
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Use a range-based for loop to iterate over the vector
    cout << "Range-based for loop: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    // Remove the last element using pop_back()
    numbers.pop_back();
    cout << "After pop_back, size of vector: " << numbers.size() << endl;

    // Insert an element at a specific position
    numbers.insert(numbers.begin() + 1, 15); // Insert 15 at index 1
    cout << "After insertion, elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove an element at a specific position
    numbers.erase(numbers.begin() + 1); // Remove element at index 1
    cout << "After erasure, elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Clear all elements in the vector
    numbers.clear();
    cout << "After clear, size of vector: " << numbers.size() << endl;

    //Actual Capacity 
    cout << numbers.capacity() <<endl;

    return 0;
}
