#include <iostream>
using namespace std;

// Define a class called 'Person'
class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    // Create an object of class 'Person' using constructor
    Person person1("Alice", 30);

    // Display the attributes
    cout << "Person Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}
