#include <iostream> // Includes the input-output stream library.

class Base { // Defines the Base class.
public: // Starts the public section of the Base class.
    virtual ~Base() { // Defines a virtual destructor for the Base class.
        std::cout << "Base destructor\n"; // Prints a message when the Base destructor is called.
    } // Ends the Base destructor.
}; // Ends the Base class.

class Derived : public Base { // Defines Derived class that inherits from Base.
public: // Starts the public section of the Derived class.
    ~Derived() override { // Defines the Derived destructor and overrides the Base destructor.
        std::cout << "Derived destructor\n"; // Prints a message when the Derived destructor is called.
    } // Ends the Derived destructor.
}; // Ends the Derived class.

int main() { // Main function where program execution begins.
    Base* pointer = new Derived(); // Creates a Derived object dynamically and stores its address in a Base pointer.
    delete pointer; // Deletes the object through the Base pointer and calls both destructors.
    return 0; // Ends the program successfully.
} // Ends the main function.