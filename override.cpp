/*
In object-oriented programming (OOP), the override keyword is used to indicate that a virtual function in a derived class is intended to override a virtual function in the base class. It is used to ensure that the correct function is called at runtime based on the type of the object being referred to.

The override keyword has two main benefits:

    It helps to catch mistakes in the inheritance hierarchy. If you try to override a non-virtual function or a function with a different signature, the compiler will generate an error. This can help to prevent accidental overrides that could lead to runtime errors.

    It makes the code more readable by explicitly indicating which functions are intended to override base class functions. This can make it easier to understand the inheritance hierarchy and the behavior of the derived class.

Here is an example of how the override keyword is used in a C++ class hierarchy:

*/
#include <iostream>
class Shape
{
public:
  virtual double area() = 0;
  virtual double perimeter() = 0;
};

class Circle : public Shape
{
public:
  Circle(double radius) : radius_(radius) {}

  double area() override // Override the virtual function in the base class
  {
    return 3.14159 * radius_ * radius_;
  }

  double perimeter() override // Override the virtual function in the base class
  {
    return 2 * 3.14159 * radius_;
  }

private:
  double radius_;
};

/*
In this example, the Circle class derives from the Shape class and overrides the area and perimeter virtual functions. The override keyword is used to explicitly indicate that these functions are intended to override the virtual functions in the base class.

*/