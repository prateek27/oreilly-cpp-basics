#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers(5);

    // Fill the vector with the value 7
    fill(numbers.begin(), numbers.end(), 7);

    cout << "Filled vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}