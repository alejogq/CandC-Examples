
#include <iostream>
#include <vector>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        // Implementation of draw method
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        // Implementation of draw method specific to Circle
    }
};

int main(){
    
}