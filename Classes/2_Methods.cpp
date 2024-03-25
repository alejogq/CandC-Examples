#include <iostream>
using namespace std;

// Define a class called 'Rectangle'
class Rectangle {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // Method to calculate area
    double calculateArea() {
        return width * height;
    }
};

int main() {
    // Create an object of class 'Rectangle'
    Rectangle rect(5.0, 4.0);

    // Calculate and display the area
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
