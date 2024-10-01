#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Define the Car class
class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    // Overload the < operator to sort cars by year (ascending order)
    bool operator<(const Car& other) const {
        return year < other.year;
    }

    // Function to print car details
    void printCar() const {
        cout << brand << " " << model << " (" << year << ")" << endl;
    }
};

bool carCompare(const Car &a,const Car &b){
    return a.model < b.model;
}


int main() {
    // Create a vector of Car objects
    vector<Car> cars;
    cars.push_back(Car("Toyota", "Corolla", 2015));
    cars.push_back(Car("Honda", "Civic", 2018));
    cars.push_back(Car("Ford", "Focus", 2013));
    cars.push_back(Car("Tesla", "Model 3", 2020));

    // Sort cars by year (using the overloaded < operator)
    sort(cars.begin(), cars.end());

    cout << "Cars sorted by year (ascending):" << endl;
    for (const Car& car : cars) {
        car.printCar();
    }

    // Sort cars by model (using a custom comparator)
    sort(cars.begin(), cars.end(), carCompare);

    cout << "\nCars sorted by model (ascending):" << endl;
    for (const Car& car : cars) {
        car.printCar();
    }

    return 0;
}