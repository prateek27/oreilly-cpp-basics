#include<iostream>
using namespace std;

int main(){

	int x = 10;
	//Address Of Operator 
	cout << &x <<endl;

	//Pointer - special kind of variable that can hold the address of another variable 
	int *xptr = &x; 

	cout << xptr <<endl;

	cout << *xptr <<endl;


	return 0;
}