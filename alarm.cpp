#include<iostream>
using namespace std;

class Alarm{

private:
	int hour;
	int minutes;


public:
	string name;
	//Constructor 
	Alarm():hour(0),minutes(0){
	}
	//Parameterised Constructor 
	Alarm(int hour,int minutes){
		setAlarm(hour,minutes);
	}
	//Copy Constructor
	Alarm(Alarm &other){
		hour = other.hour;
		minutes = other.minutes;
	}

	//Setter Function 
	void setAlarm(int hour,int minutes){
		if(hour>=0 && minutes>=0){
			this->hour = hour;
			this->minutes = minutes;
		}
	}

	//Getter Function 
	int getHour(){
		return hour;
	}
	int getMinutes(){
		return minutes;
	}

	void display(){
		cout<<"Alarm Time : "<<hour<<":"<<minutes<<endl;
		cout<<"Alarm Name "<<name <<endl;
	}

	~Alarm(){
		cout<<"Destroying an alarm!"<<endl;
		//free up resources 
	}	

};


int main(){

	Alarm morningAlarm(10,30); //Parameterised Constructor
	Alarm eveningAlarm(morningAlarm); // Copy Constructor  

	morningAlarm.name = "Morning Alarm";

	morningAlarm.display();
	eveningAlarm.display();

	return 0;
}