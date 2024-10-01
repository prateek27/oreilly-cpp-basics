#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set<int> myUnorderedSet;

    // Insert elements into the unordered_set
    myUnorderedSet.insert(30);
    myUnorderedSet.insert(10);
    myUnorderedSet.insert(20);
    myUnorderedSet.insert(40);
    myUnorderedSet.insert(20); // Duplicate element, will not be added

    // Display the elements of the unordered_set
    cout << "Elements in the unordered_set: ";
    for (int element : myUnorderedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element is in the unordered_set
    int searchElement = 20;
    if (myUnorderedSet.find(searchElement) != myUnorderedSet.end()) {
        cout << searchElement << " is present in the unordered_set." << endl;
    } else {
        cout << searchElement << " is not present in the unordered_set." << endl;
    }

    // Remove an element from the unordered_set
    myUnorderedSet.erase(10);
    cout << "After erasing 10, elements in the unordered_set: ";
    for (int element : myUnorderedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Get the size of the unordered_set
    cout << "Size of the unordered_set: " << myUnorderedSet.size() << endl;

    // Clear all elements from the unordered_set
    myUnorderedSet.clear();
    cout << "After clearing, size of the unordered_set: " << myUnorderedSet.size() << endl;

    return 0;
}