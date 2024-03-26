///main file
#include "Mynamespace.h"
using namespace std;
#include <iostream>

int main(){


    MyNamespace::Car newCar;

    cout << "Car: " << endl;
    cout << "Brand: " << newCar.brand << endl;
    cout << "year: " << newCar.year << endl;
    cout << "model: " << newCar.model << endl;


}