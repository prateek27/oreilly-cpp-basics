#include<iostream>
using namespace std;

bool isPrime(int number){
	for(int i=2;i<number;i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}


int main(){

	int number = 15;
	cout << isPrime(15)<<endl;
	cout << isPrime(22)<<endl;
	cout << isPrime(17)<<endl;
	cout << isPrime(29)<<endl;


	return 0;
}