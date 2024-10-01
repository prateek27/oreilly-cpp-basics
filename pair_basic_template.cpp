#include <iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>
class Pair{
public:
    T1 first;
    T2 second;
};


int main(){
  Pair<int,int> p1;
  p1.first = 10;
  p1.second = 25;
  
  cout << p1.first <<endl;
  cout << p1.second <<endl;
    
    return 0;
}


