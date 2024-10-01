#include<iostream>
using namespace std;


//Call by reference 1 (using pointers)
void incrementCounter(int *counterPtr){
	*counterPtr = *counterPtr + 1;
}

//Call/Pass By Value 
void incrementCounter(int counter){
	counter = counter + 1;
}

int main(){
	
	int counter = 5;
	//incrementCounter(counter);
	incrementCounter(&counter); //Address 
	cout << counter <<endl;

	return 0;
}