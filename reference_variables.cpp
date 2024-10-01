#include<iostream>
using namespace std;

//Pass by reference using reference variables 
void increment(int &z){
	z = z + 1;
}


int main(){
	
	//Reference variable 
	int x = 10;
	int &y = x;  //must be init

	y++;

	y = 50;

	cout << x <<endl;
	cout << y <<endl;
	increment(x);
	cout << x <<endl;
	cout << y <<endl;

	return 0;
}