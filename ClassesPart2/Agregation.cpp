#include <iostream>
#include <vector>
using namespace std;


// Class representing a "Department" that aggregates "Employee" objects
class Employee {
    // Implementation of Employee class
};

class Department {
private:
    vector<Employee*> employees; // Aggregation of Employee objects

public:
    void addEmployee(Employee* emp) {
        employees.push_back(emp);
    }
};


int main(){
    
}