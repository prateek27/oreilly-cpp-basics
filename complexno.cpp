#include<iostream>
using namespace std;

class ComplexNumber{
	int r;
	int i;
public:
	ComplexNumber(int r,int i):r(r),i(i){}

	void add(int delta){
		r += delta;
		i += delta;
	}
	void add(int rdelta,int idelta){
		r += rdelta;
		i += idelta;
	}
	void add(ComplexNumber &otherNumber){
		r += otherNumber.r;
		i += otherNumber.i;
	}

	ComplexNumber operator+(const ComplexNumber& otherNumber){
		return ComplexNumber(r+otherNumber.r,i+otherNumber.i);
	}

	void display(){
		cout<<r<<" + "<<i<<"i"<<endl;
	}

};


int main(){
	ComplexNumber c1(5,7);
	ComplexNumber c2(3,4);

	//c1.add(1,1);
	//c1.add(c2);
	c1.display();
	c2.display();

	cout<< 5 + 3 <<endl;
	ComplexNumber c3 = c1 + c2;
	c3.display();

	return 0;
}