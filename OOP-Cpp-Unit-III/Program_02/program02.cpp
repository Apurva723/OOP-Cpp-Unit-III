#include <iostream>  // Includes the input/output stream library

int calculateArea(int side) {  // Defines a function to calculate the area of a square
    return side * side;  // Returns side multiplied by side
}

int calculateArea(int length, int width) {  // Defines a function to calculate the area of a rectangle
    return length * width;  // Returns length multiplied by width
}

double calculateArea(double radius) {  // Defines a function to calculate the area of a circle
    constexpr double PI = 3.141592653589793;  // Defines a constant value for PI
    return PI * radius * radius;  // Returns the area of the circle
}

int main() {  // Main function where program execution starts
    std::cout << "Square Area: " << calculateArea(5) << '\n';  // Calls calculateArea() with one integer for square
    std::cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';  // Calls calculateArea() with two integers for rectangle
    std::cout << "Circle Area: " << calculateArea(2.0) << '\n';  // Calls calculateArea() with a double for circle

    return 0;  // Ends the program successfully
}