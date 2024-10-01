#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // Declare an unordered_map where keys are strings and values are integers
    unordered_map<string, int> myUnorderedMap;

    // Insert key-value pairs into the unordered_map
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 5;
    myUnorderedMap["orange"] = 2;

    // Another way to insert key-value pairs using insert() function
    myUnorderedMap.insert(make_pair("pear", 4));

    // Access elements in the unordered_map using the key
    cout << "Value associated with key 'apple': " << myUnorderedMap["apple"] << endl;
    cout << "Value associated with key 'banana': " << myUnorderedMap.at("banana") << endl;

    // Check if a key exists in the unordered_map
    string key = "mango";
    if (myUnorderedMap.find(key) != myUnorderedMap.end()) {
        cout << key << " is present in the unordered_map." << endl;
    } else {
        cout << key << " is not present in the unordered_map." << endl;
    }

    // Iterate over all key-value pairs in the unordered_map
    cout << "All key-value pairs in the unordered_map:" << endl;
    for (auto& pair : myUnorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Remove a key-value pair from the unordered_map
    myUnorderedMap.erase("orange");
    cout << "After erasing 'orange', unordered_map contains:" << endl;
    for (auto& pair : myUnorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Get the size of the unordered_map
    cout << "Size of unordered_map: " << myUnorderedMap.size() << endl;

    // Clear all elements from the unordered_map
    myUnorderedMap.clear();
    cout << "After clearing, size of unordered_map: " << myUnorderedMap.size() << endl;

    return 0;
}