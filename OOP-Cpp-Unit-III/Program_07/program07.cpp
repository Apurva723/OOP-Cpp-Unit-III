#include <iostream> // Includes the input-output stream library.

class Complex { // Defines a class named Complex.
private: // Starts the private section of the class.
    int real; // Stores the real part of the complex number.
    int imaginary; // Stores the imaginary part of the complex number.

public: // Starts the public section of the class.
    Complex(int realPart = 0, int imaginaryPart = 0) // Defines a constructor with default values.
        : real(realPart), imaginary(imaginaryPart) {} // Initializes real and imaginary members.

    friend Complex operator+(int value, const Complex& number); // Declares + operator as a friend function.

    void display() const { // Defines a function to display the complex number.
        std::cout << real; // Prints the real part.
        if (imaginary >= 0) { // Checks if the imaginary part is positive or zero.
            std::cout << " + "; // Prints the plus sign.
        } else { // Executes when the imaginary part is negative.
            std::cout << " - "; // Prints the minus sign.
        }
        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n"; // Prints the imaginary part followed by i.
    } // Ends the display function.
}; // Ends the Complex class.

Complex operator+(int value, const Complex& number) { // Defines the overloaded + operator.
    return Complex(value + number.real, number.imaginary); // Adds the integer to the real part and returns a Complex object.
} // Ends the overloaded + operator function.

int main() { // Main function where program execution begins.
    Complex number(2, 3); // Creates a Complex object with real part 2 and imaginary part 3.
    Complex result = 10 + number; // Adds 10 to the complex number using the overloaded + operator.

    std::cout << "Result: "; // Prints the result label.
    result.display(); // Displays the resulting complex number.

    return 0; // Ends the program successfully.
} // Ends the main function.