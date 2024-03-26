//To compile follow:
//g++ MyNamespace.cpp main.cpp -o myprogram

#include "MyNamespace.h"


int main() {
    // Creating an object of MyClass
    MyNamespace::MyClass obj;
    // Calling method of MyClass
    obj.method();

    // Calling function inside MyNamespace
    MyNamespace::myFunction();

    return 0;
}