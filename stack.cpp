#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the top element
    cout << "Top element: " << myStack.top() << endl;

    // Popping elements from the stack
    myStack.pop();
    cout << "After pop, top element: " << myStack.top() << endl;

    // Check if the stack is empty
    while(!myStack.empty()){
        cout<< myStack.top()<<endl;
        myStack.pop();
    }

    // Size of the stack
    cout << "Size of stack: " << myStack.size() << endl;

    return 0;
}