#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(2);

    sort(v.begin(), v.end());

    for(int i : v) {
        cout << i << endl;
    }

    return 0;
}