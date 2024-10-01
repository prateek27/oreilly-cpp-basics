#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Initialize an unordered_map with some key-value pairs
    unordered_map<string, int> hashmap = {
        {"apple", 1},
        {"banana", 2},
        {"cherry", 3},
        {"date", 4},
        {"elderberry", 5}
    };

    // Iterator to traverse the unordered_map
    auto it = hashmap.begin();

    cout << "Original map:" << endl;
    for (const auto& pair : hashmap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;

    // Iterate and remove elements with value > 3
    while (it != hashmap.end()) {
        if (it->second > 3) {
            // Remove the element and get the iterator to the next element
            it = hashmap.erase(it);
        } else {
            // Move to the next element
            ++it;
        }
    }

    cout << "Modified map:" << endl;
    for (const auto& pair : hashmap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}