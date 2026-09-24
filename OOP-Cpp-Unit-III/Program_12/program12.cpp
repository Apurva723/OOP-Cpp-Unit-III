#include <iostream> // Includes the input-output stream library.
#include <memory> // Includes smart pointer functionality.
#include <vector> // Includes the vector container.

class Shape { // Defines the abstract Shape class.
public: // Starts the public section of the Shape class.
    virtual double area() const = 0; // Declares a pure virtual function to calculate area.
    virtual void displayName() const = 0; // Declares a pure virtual function to display the shape name.
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
        return length * width; // Calculates and returns the rectangle's area.
    } // Ends the area function.

    void displayName() const override { // Overrides the displayName function.
        std::cout << "Rectangle"; // Prints the name of the shape.
    } // Ends the displayName function.
}; // Ends the Rectangle class.

class Circle : public Shape { // Defines Circle class that inherits from Shape.
private: // Starts the private section of the Circle class.
    double radius; // Stores the radius of the circle.

public: // Starts the public section of the Circle class.
    explicit Circle(double givenRadius) : radius(givenRadius) {} // Defines the Circle constructor and initializes radius.

    double area() const override { // Overrides the area function of the Shape class.
        constexpr double PI = 3.141592653589793; // Defines the constant value of PI.
        return PI * radius * radius; // Calculates and returns the circle's area.
    } // Ends the area function.

    void displayName() const override { // Overrides the displayName function.
        std::cout << "Circle"; // Prints the name of the shape.
    } // Ends the displayName function.
}; // Ends the Circle class.

int main() { // Main function where program execution begins.
    std::vector<std::unique_ptr<Shape>> shapes; // Creates a vector to store smart pointers to Shape objects.
    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0)); // Creates a Rectangle object and adds it to the vector.
    shapes.push_back(std::make_unique<Circle>(2.0)); // Creates a Circle object and adds it to the vector.

    for (const auto& shape : shapes) { // Loops through every shape stored in the vector.
        shape->displayName(); // Displays the name of the current shape.
        std::cout << " Area: " << shape->area() << '\n'; // Calculates and displays the area of the current shape.
    } // Ends the for loop.

    return 0; // Ends the program successfully.
} // Ends the main function.