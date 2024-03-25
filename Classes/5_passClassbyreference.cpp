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

// Function to modify point coordinates
void modifyPoint(Point &p, int newX, int newY) {
    p.x = newX;
    p.y = newY;
}

int main() {
    // Create an object of class 'Point'
    Point p1(3, 4);

    // Pass the object to the function by reference
    modifyPoint(p1, 7, 8);

    // Display modified point coordinates
    cout << "Modified Point Coordinates: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}
