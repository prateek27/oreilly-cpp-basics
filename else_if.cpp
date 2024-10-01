#include<iostream>
using namespace std;

int main(){

	//Grading System 
	int score;
	cin>>score;

	if(score>=90){
		cout<<"Grade A" <<endl;
	}
	else if(score>=80){
		cout<<"Grade B"<<endl;
	}
	else if(score>=70){
		cout<<"Grade C"<<endl;
	}
	else{
		cout<<"Grade D"<<endl;
	}




	return 0; 
}