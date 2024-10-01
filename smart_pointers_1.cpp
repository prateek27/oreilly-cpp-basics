#include<iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1 = std::make_unique<int>(10); 
    cout<<"Ptr 1 :"<< *ptr1 <<endl;
    
    
    // creates an integer with value 10
    unique_ptr<int> ptr2 = move(ptr1); 
    // ptr1 is now empty, ptr2 owns the integer
     
     cout<<"Ptr 2 :"<< *ptr2 <<endl;
    
    // No need to manually delete the pointer, ptr2 will automatically delete the integer when it goes out of scope
}
