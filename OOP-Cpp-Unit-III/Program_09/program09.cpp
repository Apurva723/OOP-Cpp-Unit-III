#include <iostream> // Includes the input-output stream library.

class Animal { // Defines the Animal base class.
public: // Starts the public section of the Animal class.
    virtual void sound() const { // Defines a virtual function for making a sound.
        std::cout << "Animal makes a sound\n"; // Prints the Animal sound message.
    } // Ends the sound function.

    virtual ~Animal() = default; // Defines a virtual destructor for the Animal class.
}; // Ends the Animal class.

class Dog : public Animal { // Defines the Dog class that inherits from Animal.
public: // Starts the public section of the Dog class.
    void sound() const override { // Overrides the sound function of the Animal class.
        std::cout << "Dog barks\n"; // Prints the Dog sound message.
    } // Ends the sound function.
}; // Ends the Dog class.

class Cat : public Animal { // Defines the Cat class that inherits from Animal.
public: // Starts the public section of the Cat class.
    void sound() const override { // Overrides the sound function of the Animal class.
        std::cout << "Cat meows\n"; // Prints the Cat sound message.
    } // Ends the sound function.
}; // Ends the Cat class.

int main() { // Main function where program execution begins.
    Dog dog; // Creates an object of the Dog class.
    Cat cat; // Creates an object of the Cat class.

    Animal* animal = &dog; // Creates an Animal pointer that points to the Dog object.
    animal->sound(); // Calls Dog's sound function through the virtual function mechanism.

    animal = &cat; // Changes the pointer to point to the Cat object.
    animal->sound(); // Calls Cat's sound function through the virtual function mechanism.

    return 0; // Ends the program successfully.
} // Ends the main function.