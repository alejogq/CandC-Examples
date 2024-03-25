#include <iostream>
using namespace std;

// Define a class called 'Point'
class Point {
public:
    int x;
    int y;

    // Constructor
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

// Function to display point coordinates
void displayPoint(Point p) {
    cout << "Point Coordinates: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    // Create an object of class 'Point'
    Point p1(3, 4);

    // Pass the object to the function by value
    displayPoint(p1);

    return 0;
}
