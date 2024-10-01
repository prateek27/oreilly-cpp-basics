#include <iostream>
using namespace std;

/* Capturing Variables:
    One of the key features of lambda functions is the ability to capture variables from the surrounding scope.
*/

int main() {
    int x = 10;
    
    //Capture by value vs reference 
    auto fun = [&x](int a){
        x = x + a;
        cout <<"X inside fun :"<< x <<endl;  
    };
    
    fun(50);
    cout<<"X in Main :" <<x <<endl;
    
    return 0;
}