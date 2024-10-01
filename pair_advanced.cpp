#include <iostream>
#include <string>

using namespace std; // Using the standard namespace

// Template class to hold a pair of objects
template <typename T1, typename T2>
class Pair {
private:
    T1 first;  // First object of type T1
    T2 second; // Second object of type T2

public:
    // Constructor to initialize the pair
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Function to get the first element
    T1 getFirst() const {
        return first;
    }

    // Function to get the second element
    T2 getSecond() const {
        return second;
    }
};

int main() {
    // Creating a Pair of int and double
    Pair<int, double> p1(10, 20.5);
    cout << "First: " << p1.getFirst() << ", Second: " << p1.getSecond() << endl;

    // Creating a Pair of string and int
    Pair<string, int> p2("Age", 25);
    cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl;

    return 0;
}

