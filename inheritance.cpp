#include <iostream>  // include the iostream library to use cout and endl
using namespace std; // using the std namespace allows us to use cout and endl without specifying std::

/**
 * Inheritance is a fundamental concept in object-oriented programming (OOP) that allows one class (the derived class) to inherit the properties and behaviors of another class (the base class). Inheritance is often used to create a hierarchy of classes, where the derived class adds additional functionality to the base class.
 * In C++, inheritance is implemented using the : operator, followed by the keyword public, protected, or private, and the name of the base class. For example:
 *
 */

class Base
{ // define the base class
  // class definition
};

class Derived : public Base
{ // define the derived class, which inherits from the base class
  // class definition
};

/*
The derived class has access to the public and protected members of the base class, but not the private members. The access specifier (public, protected, or private) determines which members of the base class are inherited by the derived class.

Here is an example of inheritance in C++ that demonstrates some advanced concepts:

*/

class Animal
{                // define the base class Animal
protected:       // declare the data members as protected, which means they can be accessed by the derived class
    string name; // the name of the animal
    int age;     // the age of the animal

public:
    // constructor
    Animal(string name, int age)
    {                      // a constructor that takes the name and age of the animal as arguments
        this->name = name; // set the name of the animal to the given name
        this->age = age;   // set the age of the animal to the given age
    }

    // public member functions
    void makeNoise()
    {                                 // a function to make the animal make a noise
        cout << "Some noise" << endl; // output "Some noise" followed by a newline
    }

    string getName()
    {                // a function to get the name of the animal
        return name; // return the name of the animal
    }

    int getAge()
    {               // a function to get the age of the animal
        return age; // return the age of the animal
    }
};

class Dog : public Animal
{                 // define the derived class Dog, which inherits from Animal
private:          // declare the data members as private, which means they can only be accessed by the Dog class
    string breed; // the breed of the dog

public:
    // constructor
    Dog(string name, int age, string breed) : Animal(name, age)
    {                        // a constructor that takes the name, age, and breed of the dog as arguments and calls the base class's constructor with the name and age as arguments
        this->breed = breed; // set the breed of the dog to the given breed
    }

    // public member functions
    void bark()
    {                            // a function to make the dog bark
        cout << "Woof!" << endl; // output "Woof!" followed by a newline
    }

    string getBreed()
    {                 // a function to get the breed of the dog
        return breed; // return the breed of the dog
    }
};

int main()
{
    Dog dog("Buddy", 5, "Labrador"); // create a Dog object called dog with the name "Buddy", age 5, and breed "Labrador"
    dog.makeNoise();                 // make the dog make a noise (the Animal class's makeNoise function will be called)
    dog.bark();                      // make the dog bark

    cout << "Name: " << dog.getName() << endl;   // output the name of the dog
    cout << "Age: " << dog.getAge() << endl;     // output the age of the dog
    cout << "Breed: " << dog.getBreed() << endl; // output the breed of the dog

    return 0;
}
