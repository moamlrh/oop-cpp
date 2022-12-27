/*

Abstraction is a fundamental principle of object-oriented programming (OOP) that involves representing the essential features of an object without including the details of its implementation. In C++, you can use abstract classes and pure virtual functions to achieve abstraction.

An abstract class is a class that cannot be instantiated and is used as a base class for one or more derived classes. An abstract class contains at least one pure virtual function, which is a function that has no implementation and is specified by a pure specifier (= 0) in the function declaration. A derived class of an abstract class must implement all of the pure virtual functions of the base class, or it will also be an abstract class.

Here is an example of an abstract class in C++ that represents a shape:

*/

class Shape
{
public:
    virtual double area() = 0;      // Pure virtual function
    virtual double perimeter() = 0; // Pure virtual function
};
/*

In this example, the Shape class has two pure virtual functions: area and perimeter. Since the Shape class contains at least one pure virtual function, it is an abstract class and cannot be instantiated.

To implement the Shape class, you can create a derived class for each specific type of shape, such as a circle or a rectangle. Here is an example of a derived class for a circle:

*/
class Circle : public Shape
{
public:
    Circle(double radius) : radius_(radius) {}

    double area() override // Override the pure virtual function of the base class
    {
        return 3.14159 * radius_ * radius_;
    }

    double perimeter() override // Override the pure virtual function of the base class
    {
        return 2 * 3.14159 * radius_;
    }

private:
    double radius_;
};

/*

In this example, the Circle class derives from the Shape class and implements the area and perimeter functions, which are pure virtual functions in the base class. The Circle class can now be instantiated and used to represent a circle shape.

*/