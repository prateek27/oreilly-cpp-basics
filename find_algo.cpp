#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {4, 2, 5, 1, 3};

    // Find the element 5 in the vector
    auto it = find(numbers.begin(), numbers.end(), 5);

    if (it != numbers.end()) {
        cout << "Element 5 found at index: " << distance(numbers.begin(), it) << endl;
    } else {
        cout << "Element 5 not found" << endl;
    }

    return 0;
}