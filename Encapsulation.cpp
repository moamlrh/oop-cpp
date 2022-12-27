/*
Encapsulation is a key concept in object-oriented programming (OOP) that involves bundling data and functionality together in a single unit, or object. Encapsulation allows you to hide the implementation details of a class from other classes, making it easier to modify the implementation without affecting other parts of the code.

In C++, encapsulation is implemented using the private and public access specifiers. Members of a class that are declared as private can only be accessed by the class itself, while members that are declared as public can be accessed by any code.

*/

#include <iostream> // include the iostream library to use cout and endl

using namespace std; // using the std namespace allows us to use cout and endl without specifying std::

class Employee
{                // define the Employee class
private:         // declare the data members as private, which means they can only be accessed by the Employee class
    string name; // the name of the employee
    int salary;  // the salary of the employee

public:
    // constructor
    Employee(string name, int salary)
    {                          // a constructor that takes the name and salary of the employee as arguments
        this->name = name;     // set the name of the employee to the given name
        this->salary = salary; // set the salary of the employee to the given salary
    }

    // public member functions
    string getName()
    {                // a function to get the name of the employee
        return name; // return the name of the employee
    }

    int getSalary()
    {                  // a function to get the salary of the employee
        return salary; // return the salary of the employee
    }

    void setSalary(int salary)
    {                          // a function to set the salary of the employee
        this->salary = salary; // set the salary of the employee to the given salary
    }
};

int main()
{
    Employee employee("John", 30000); // create an Employee object called employee with the name "John" and salary 30000

    cout << "Name: " << employee.getName() << endl;      // output the name of the employee
    cout << "Salary: $" << employee.getSalary() << endl; // output the salary of the employee

    employee.setSalary(40000); // set the salary of the employee to 40000

    cout << "Updated salary: $" << employee.getSalary() << endl; // output the updated salary of the employee

    return 0;
}