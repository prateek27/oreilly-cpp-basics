#include <iostream>
#include <set>

using namespace std;

int main() {
    // Declare a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(40);
    mySet.insert(20); // Duplicate element, will not be added

    // Display the elements of the set
    cout << "Elements in the set: ";
    for (int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element is in the set
    int searchElement = 20;
    if (mySet.find(searchElement) != mySet.end()) {
        cout << searchElement << " is present in the set." << endl;
    } else {
        cout << searchElement << " is not present in the set." << endl;
    }

    // Remove an element from the set
    mySet.erase(10);
    cout << "After erasing 10, elements in the set: ";
    for (int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Get the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Clear all elements from the set
    mySet.clear();
    cout << "After clearing, size of the set: " << mySet.size() << endl;

    return 0;
}