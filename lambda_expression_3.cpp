#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//Sort a List of Cars 


// Car class definition
class Car {
public:
    std::string make;
    std::string model;
    int year;

    // Constructor
    Car(std::string make, std::string model, int year) 
        : make(make), model(model), year(year) {}

    // Function to display car information
    void display() const {
        std::cout << year << " " << make << " " << model << std::endl;
    }
};

int main() {
    // Creating a list of cars
    std::vector<Car> cars = {
        Car("Toyota", "Camry", 2018),
        Car("Ford", "Mustang", 1969),
        Car("Tesla", "Model S", 2021),
        Car("Honda", "Civic", 2018),
        Car("Chevrolet", "Corvette", 2020)
    };

    // Display the unsorted list
    std::cout << "Before sorting:" << std::endl;
    for (const auto& car : cars) {
        car.display();
    }

    // Sorting cars by year using a lambda function
    std::sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {
        if(car1.year==car2.year){
            return car1.model > car2.model;
        }
        return car1.year < car2.year;  // Sort in ascending order by year
    });
    
    //local variable 
    bool ascending = false;

    // Sorting cars by year using a lambda function
    std::sort(cars.begin(), cars.end(), [ascending](const Car& car1, const Car& car2) {
        if(ascending){
            return car1.make < car2.make;
        }
        else{
            return car1.make > car2.make;
        }
        
    });
    // Display the sorted list
    std::cout << "\nAfter sorting by year (ascending):" << std::endl;
    for (const auto& car : cars) {
        car.display();
    }

    return 0;
}