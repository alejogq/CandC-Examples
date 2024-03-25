#include <iostream>
using namespace std;

// Define a class called 'Car'
class Car {
public:
    string brand;
    string model;
    int year;
};

int main() {
    // Create an object of class 'Car'
    Car myCar;

    // Assign values to its attributes
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.year = 2022;

    // Display the attributes
    cout << "Car Details:" << endl;
    cout << "Brand: " << myCar.brand << endl;
    cout << "Model: " << myCar.model << endl;
    cout << "Year: " << myCar.year << endl;

    return 0;
}
