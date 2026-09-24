#include <iostream>  // Includes the input/output stream library

int add(int first, int second) {  // Defines a function to add two integers
    return first + second;  // Returns the sum of the two integers
}

double add(double first, double second) {  // Defines a function to add two double values
    return first + second;  // Returns the sum of the two double values
}

int add(int first, int second, int third) {  // Defines a function to add three integers
    return first + second + third;  // Returns the sum of the three integers
}

int main() {  // Main function where program execution starts
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';  // Calls add() with two integers and displays the result
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';  // Calls add() with two double values and displays the result
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n';  // Calls add() with three integers and displays the result
    return 0;  // Ends the program successfully
}