/*
Polymorphism is a key concept in object-oriented programming (OOP) that allows you to write code that can operate on multiple different types of objects in a uniform way, without having to know the specific type of each object at compile time.

There are two main types of polymorphism in C++: static polymorphism and dynamic polymorphism.

Static polymorphism is implemented using function overloading and operator overloading. Function overloading allows you to define multiple functions with the same name but different parameter lists, and operator overloading allows you to define how operators (such as +, -, *, etc.) behave when applied to objects of a certain class.

Dynamic polymorphism is implemented using inheritance and virtual functions. When a class contains a virtual function, the compiler creates a virtual function table (vtable) that stores pointers to the virtual functions of the class. When a derived class overrides a virtual function, it adds a new entry to the vtable that points to the overridden function. This allows the derived class to have its own implementation of the virtual function, which can be called through a pointer or reference to the base class.

Here is an example of polymorphism in C++ using virtual functions:
*/
#include <iostream> // include the iostream library to use cout and endl

using namespace std; // using the std namespace allows us to use cout and endl without specifying std::

class Animal
{ // define the base class Animal
public:
    virtual void makeNoise()
    {                                 // a virtual function to make the animal make a noise
        cout << "Some noise" << endl; // output "Some noise" followed by a newline
    }
};

class Dog : public Animal
{ // define the derived class Dog, which inherits from Animal
public:
    void makeNoise() override
    {                            // override the makeNoise function
        cout << "Woof!" << endl; // output "Woof!" followed by a newline
    }
};

int main()
{
    Animal *animal = new Dog; // create a pointer to an Animal object and assign it the address of a new Dog object
    animal->makeNoise();      // make the animal make a noise (the Dog class's makeNoise function will be called)

    return 0;
}

// advanced example
class Shape
{
public:
    virtual void draw() const = 0; // it's a pure virtual function that should be impelement in each derived class.
};

class Circle : public Shape
{
public:
    void draw() const override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape
{
public:
    void draw() const override
    {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // Output: "Drawing a circle"
    shape2->draw(); // Output: "Drawing a square"

    return 0;
}
