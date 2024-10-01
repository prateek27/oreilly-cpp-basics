#include<iostream>
using namespace std;
//Base Class
class Shape{
protected:
	int x,y;
public:
	Shape(int xPos,int yPos):x(xPos),y(yPos){}

	void draw(){
		cout<<"Drawing a shape at "<<x<<" and "<<y <<endl;
	}
};

//Derived Class
class Circle: public Shape{
private:
	int radius;

public:
	Circle(int xPos,int yPos,int radius):Shape(xPos,yPos),radius(radius){}

	//Over-ride
	void draw(){
		cout<<"Drawing a circle at "<<x<<" and "<<y<<" with radius "<<radius<<endl;
	}

};


int main(){

	Circle circle(10,20,4);
	circle.draw();

	return 0;
}