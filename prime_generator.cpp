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

void printAllPrimes(int R){
	for(int i=2;i<=R;i++){
		if(isPrime(i)){
			cout<<i<<",";
		}
	}
	cout<<endl;

}


int main(){
	// Prints all prime numbers upto R 
	int R = 50;
	printAllPrimes(R);

	return 0;
}