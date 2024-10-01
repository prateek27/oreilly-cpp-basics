// Online C++ compiler to run C++ program online
#include <iostream>

//General Syntax 
template <typename T>
T findMax(T a, T b) {
    // function body
    return (a>b)?a:b;
}

class Book {
private:
    std::string title;
    double price;

public:
    // Constructor
    Book(std::string t, double p) : title(t), price(p) {}

    // Overload the '>' operator to compare books by price
    bool operator>(const Book& other) const {
        return this->price > other.price;
    }

    // Getter to display book details
    std::string getTitle() const {
        return title;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    // Using the function with different data types
    std::cout << "Max of 3 and 7 is: " << findMax(3, 7) << std::endl;         // int type
    std::cout << "Max of 3.5 and 2.1 is: " << findMax(3.5, 2.1) << std::endl; // double type
    std::cout << "Max of 'x' and 'a' is: " << findMax('x', 'a') << std::endl; // char type
    
     // Creating Book objects
    Book book1("C++ Programming", 49.99);
    Book book2("Java Programming", 59.99);

    // Using the template function with Book objects
    Book expensiveBook = findMax(book1, book2);

    std::cout << "The more expensive book is: " << expensiveBook.getTitle() 
              << " with a price of $" << expensiveBook.getPrice() << std::endl;


    return 0;
}



