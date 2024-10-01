#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Min Heap
    priority_queue<int,vector<int>, greater<int> > myPriorityQueue;
    

    // Insert elements into the priority_queue
    myPriorityQueue.push(30);
    myPriorityQueue.push(10);
    myPriorityQueue.push(20);

    // Display the top (highest priority) element
    cout << "Top element: " << myPriorityQueue.top() << endl;

    // Pop the top element
    myPriorityQueue.pop();
    cout << "After pop, top element: " << myPriorityQueue.top() << endl;

    // Check if the priority_queue is empty
    if (myPriorityQueue.empty()) {
        cout << "Priority Queue is empty." << endl;
    } else {
        cout << "Priority Queue is not empty." << endl;
    }

    // Size of the priority_queue
    cout << "Size of priority queue: " << myPriorityQueue.size() << endl;

    return 0;
}