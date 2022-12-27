/*
    In C++, the virtual keyword is used to declare a virtual function in a class. A virtual function is a member function that can be overridden by a derived class.
    In the example you provided, the makeNoise function in the Animal class is declared as a virtual function. This means that if a derived class overrides the makeNoise function, the derived class's implementation of the function will be called, rather than the base class's implementation.
    For example, in the following code:
*/
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void makeNoise()
    {
        cout << "Some noise" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeNoise()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Animal *animal = new Dog;
    animal->makeNoise();

    return 0;
}

/*

    The makeNoise function in the Dog class overrides the makeNoise function in the Animal class. When we call the makeNoise function on an Animal pointer that is pointing to a Dog object, the Dog class's implementation of the makeNoise function is called, rather than the Animal class's implementation.

    The virtual keyword is used to indicate that a member function can be overridden by a derived class, and is an important concept in object-oriented programming.

*/

/*
    Virtual destructors: In C++, it is important to declare the destructor of a class as virtual if the class has any virtual functions. This is because the destructor of a derived class should be called when an object of the derived class is deleted, rather than the destructor of the base class.
*/

class Animal
{
public:
    virtual ~Animal()
    { // declare the destructor as virtual
        cout << "Deleting Animal object" << endl;
    }
};

class Dog : public Animal
{
public:
    ~Dog()
    {
        cout << "Deleting Dog object" << endl;
    }
};

int main()
{
    Animal *animal = new Dog;
    delete animal; // the destructor of the Dog class will be called

    return 0;
}

/*
In this example, the Animal class has a virtual destructor, which is necessary because the Animal class has a virtual function (the destructor itself). When we delete the animal pointer, which is pointing to a Dog object, the destructor of the Dog class is called, rather than the destructor of the Animal class. This ensures that the memory occupied by the Dog object is properly deallocated.

    Pure virtual functions: A pure virtual function is a virtual function that has no implementation in the base class. A class with a pure virtual function is called an abstract class, and cannot be instantiated. Instead, it must be derived from by a concrete class that provides an implementation for the pure virtual function.
*/

class Animal
{
public:
    virtual void makeNoise() = 0; // declare the makeNoise function as a pure virtual function
};

class Dog : public Animal
{
public:
    void makeNoise()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Animal *animal = new Dog;
    animal->makeNoise();

    return 0;
}

/*
    In this example, the Animal class is an abstract class because it has a pure virtual function (makeNoise). It cannot be instantiated, so we cannot create an object of type Animal. Instead, we must derive from the Animal class
*/