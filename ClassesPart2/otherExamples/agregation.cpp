#include<iostream>
#include<vector>
using namespace std;


class Employee{
    public:
    string name="";
    string position="";
    
    //class constructor
    Employee(string _name, string _position){
        name=_name;
        position=_position;
    }
};


class Department{

    private:
        vector<Employee*> employeesVector;
        // a vector with the pointers to the objects.

    public:

        void addEmployee(Employee* emp){
            employeesVector.push_back(emp);
        }

        void print(){
            cout<<"The Department has: " <<endl
                <<"-- "<< employeesVector[0]->position << ": "<< employeesVector[0]->name<<endl
                <<"-- "<< employeesVector[1]->position << ": "<< employeesVector[1]->name<<endl;
        }
};

int main(){

    Employee* employee1 = new Employee("Anna","Director");
    Employee _employee2("John","Sales");
    Employee*  employee2= &_employee2;
    Department computerSci;
    computerSci.addEmployee(employee1);
    computerSci.addEmployee(employee2);
    computerSci.print();
}