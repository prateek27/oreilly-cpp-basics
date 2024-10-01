#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Display the back element
    cout << "Back element: " << myQueue.back() << endl;

    // Dequeue elements from the queue
    myQueue.pop();
    cout << "After pop, front element: " << myQueue.front() << endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Size of the queue
    cout << "Size of queue: " << myQueue.size() << endl;

    return 0;
}