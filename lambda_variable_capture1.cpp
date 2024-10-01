#include <iostream>
using namespace std;

/* In C++, the auto keyword is used with lambda functions because lambda expressions generate unique, unnamed types (closure type) that you cannot directly declare with a specific type name

    The auto keyword is a feature introduced in C++11 that enables the compiler to automatically deduce the type of a variable based on its initializer. 
*/

int main() {
    
    auto greet = [](){
        cout<<"Hello World!";
    };
    
    //Function call 
    greet();
    
    return 0;
}