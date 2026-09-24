#include <iostream> // Includes the input-output stream library.

class Shape { // Defines the Shape class.
public: // Starts the public section of the Shape class.
    virtual double area() const = 0; // Declares a pure virtual function for calculating area.
    virtual ~Shape() = default; // Defines a virtual destructor for the Shape class.
}; // Ends the Shape class.

class Rectangle : public Shape { // Defines Rectangle class that inherits from Shape.
private: // Starts the private section of the Rectangle class.
    double length; // Stores the length of the rectangle.
    double width; // Stores the width of the rectangle.

public: // Starts the public section of the Rectangle class.
    Rectangle(double givenLength, double givenWidth) // Defines the Rectangle constructor.
        : length(givenLength), width(givenWidth) {} // Initializes length and width.

    double area() const override { // Overrides the pure virtual area function.
        return length * width; // Calculates and returns the rectangle's area.
    } // Ends the area function.
}; // Ends the Rectangle class.

int main() { // Main function where program execution begins.
    Rectangle rectangle(8.0, 4.0); // Creates a Rectangle object with length 8 and width 4.
    std::cout << "Rectangle Area: " << rectangle.area() << '\n'; // Calculates and prints the rectangle's area.
    return 0; // Ends the program successfully.
} // Ends the main function.