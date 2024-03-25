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

// Function to update point coordinates using pointers
void updatePoint(Point *p, int newX, int newY) {
    p->x = newX;
    p->y = newY;
}

int main() {
    // Create an object of class 'Point'
    Point p1(3, 4);

    // Pass the address of the object to the function
    updatePoint(&p1, 7, 8);

    // Display updated point coordinates
    cout << "Updated Point Coordinates: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}
