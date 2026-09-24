#include <iostream> // Includes the input-output stream library.

class Shape { // Defines the Shape base class.
public: // Starts the public section of the Shape class.
    virtual double area() const { // Defines a virtual function to calculate area.
        return 0.0; // Returns 0.0 as the default area.
    } // Ends the area function.

    virtual ~Shape() = default; // Defines a virtual destructor for the Shape class.
}; // Ends the Shape class.

class Rectangle : public Shape { // Defines Rectangle class that inherits from Shape.
private: // Starts the private section of the Rectangle class.
    double length; // Stores the length of the rectangle.
    double width; // Stores the width of the rectangle.

public: // Starts the public section of the Rectangle class.
    Rectangle(double givenLength, double givenWidth) // Defines the Rectangle constructor.
        : length(givenLength), width(givenWidth) {} // Initializes length and width.

    double area() const override { // Overrides the area function of the Shape class.
        return length * width; // Calculates and returns the area of the rectangle.
    } // Ends the area function.
}; // Ends the Rectangle class.

class Circle : public Shape { // Defines Circle class that inherits from Shape.
private: // Starts the private section of the Circle class.
    double radius; // Stores the radius of the circle.

public: // Starts the public section of the Circle class.
    explicit Circle(double givenRadius) : radius(givenRadius) {} // Defines the constructor and initializes radius.

    double area() const override { // Overrides the area function of the Shape class.
        constexpr double PI = 3.141592653589793; // Defines the constant value of PI.
        return PI * radius * radius; // Calculates and returns the area of the circle.
    } // Ends the area function.
}; // Ends the Circle class.

void printArea(const Shape& shape) { // Defines a function that accepts a Shape reference.
    std::cout << "Area: " << shape.area() << '\n'; // Calculates and prints the area.
} // Ends the printArea function.

int main() { // Main function where program execution begins.
    Rectangle rectangle(5.0, 3.0); // Creates a Rectangle object with length 5 and width 3.
    Circle circle(2.0); // Creates a Circle object with radius 2.

    printArea(rectangle); // Calls printArea to display the rectangle's area.
    printArea(circle); // Calls printArea to display the circle's area.

    return 0; // Ends the program successfully.
} // Ends the main function.