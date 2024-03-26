#include "MyNamespace.h"
#include <iostream>

namespace MyNamespace {
    void MyClass::method() {
        std::cout << "Method of MyClass" << std::endl;
    }

    void myFunction() {
        std::cout << "Function inside MyNamespace" << std::endl;
    }
}
