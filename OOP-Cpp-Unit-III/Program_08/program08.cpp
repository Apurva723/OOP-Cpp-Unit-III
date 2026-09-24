#include <iostream> // Includes the input-output stream library.

class Base { // Defines the Base class.
public: // Starts the public section of the Base class.
    void display() const { // Defines the display function in the Base class.
        std::cout << "Base display function\n"; // Prints the Base class message.
    } // Ends the display function.
}; // Ends the Base class.

class Derived : public Base { // Defines Derived class that inherits from Base publicly.
public: // Starts the public section of the Derived class.
    void display() const { // Defines a display function in the Derived class.
        std::cout << "Derived display function\n"; // Prints the Derived class message.
    } // Ends the display function.
}; // Ends the Derived class.

int main() { // Main function where program execution begins.
    Derived derivedObject; // Creates an object of the Derived class.
    Base* basePointer = &derivedObject; // Creates a Base class pointer pointing to the Derived object.

    basePointer->display(); // Calls the Base class display function because the function is not virtual.

    return 0; // Ends the program successfully.
} // Ends the main function.