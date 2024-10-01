#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 20, 40, 50};

    // Binary search for the element 3
    bool found = binary_search(numbers.begin(), numbers.end(), 3);
    int idx = lower_bound(numbers.begin(),numbers.end(),25) - numbers.begin();
    cout << "Index "<<idx;

    cout << "Element 3 " << (found ? "found" : "not found") << endl;

    return 0;
}