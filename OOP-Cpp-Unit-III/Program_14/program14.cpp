#include <iostream> // Includes the input-output stream library.

class Base { // Defines the Base class.
public: // Starts the public section of the Base class.
    virtual void display() const { // Defines a virtual display function.
        std::cout << "Base object\n"; // Prints the Base object message.
    } // Ends the display function.

    virtual ~Base() = default; // Defines a virtual destructor for the Base class.
}; // Ends the Base class.

class Derived : public Base { // Defines Derived class that inherits from Base.
public: // Starts the public section of the Derived class.
    void display() const override { // Overrides the display function of the Base class.
        std::cout << "Derived object\n"; // Prints the Derived object message.
    } // Ends the display function.
}; // Ends the Derived class.

void displayByValue(Base object) { // Defines a function that receives a Base object by value.
    object.display(); // Calls the display function of the copied Base object.
} // Ends the displayByValue function.

void displayByReference(const Base& object) { // Defines a function that receives a Base object by reference.
    object.display(); // Calls the virtual display function of the original object.
} // Ends the displayByReference function.

int main() { // Main function where program execution begins.
    Derived derived; // Creates an object of the Derived class.

    std::cout << "Passing by value: "; // Prints a message before passing the object by value.
    displayByValue(derived); // Passes the Derived object by value, causing object slicing.

    std::cout << "Passing by reference: "; // Prints a message before passing the object by reference.
    displayByReference(derived); // Passes the Derived object by reference and preserves polymorphism.

    return 0; // Ends the program successfully.
} // Ends the main function.