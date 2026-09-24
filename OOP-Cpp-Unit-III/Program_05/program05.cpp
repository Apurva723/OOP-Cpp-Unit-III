#include <iostream>  // Includes the input/output stream library

class Complex {  // Defines a class named Complex
private:
    int real;  // Stores the real part of the complex number
    int imaginary;  // Stores the imaginary part of the complex number

public:
    Complex(int realPart = 0, int imaginaryPart = 0)  // Defines a constructor with default values
        : real(realPart), imaginary(imaginaryPart) {}  // Initializes real and imaginary members

    Complex operator+(const Complex& other) const {  // Overloads the + operator for complex numbers
        return Complex(real + other.real, imaginary + other.imaginary);  // Adds real and imaginary parts
    }

    void display() const {  // Defines a function to display the complex number
        std::cout << real;  // Displays the real part

        if (imaginary >= 0) {  // Checks if the imaginary part is positive or zero
            std::cout << " + ";  // Displays the plus sign
        } else {  // Executes when the imaginary part is negative
            std::cout << " - ";  // Displays the minus sign
        }

        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";  // Displays the imaginary part followed by i
    }
};

int main() {  // Main function where program execution starts
    Complex first(2, 3);  // Creates the first complex number with real part 2 and imaginary part 3
    Complex second(4, 5);  // Creates the second complex number with real part 4 and imaginary part 5
    Complex sum = first + second;  // Adds the two complex numbers using the overloaded + operator

    std::cout << "First complex number: ";  // Displays the label for the first complex number
    first.display();  // Displays the first complex number

    std::cout << "Second complex number: ";  // Displays the label for the second complex number
    second.display();  // Displays the second complex number

    std::cout << "Sum: ";  // Displays the label for the sum
    sum.display();  // Displays the sum of the two complex numbers

    return 0;  // Ends the program successfully
}