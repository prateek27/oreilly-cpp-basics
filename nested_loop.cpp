#include<iostream>
using namespace std;

int main(){

	int n = 4;
	int value = 1;

	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout << value <<" ";
			value++;
		}
		cout<<endl;
	}


	return 0; 
}