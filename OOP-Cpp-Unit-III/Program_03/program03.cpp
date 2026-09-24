#include <iostream>  // Includes the input/output stream library

class Number {  // Defines a class named Number
private:
    int value;  // Declares a private data member to store the number

public:
    explicit Number(int givenValue) : value(givenValue) {}  // Constructor initializes value

    Number operator-() const {  // Overloads the unary minus (-) operator
        return Number(-value);  // Returns a new Number object with the negative value
    }

    void display() const {  // Defines a function to display the value
        std::cout << value << '\n';  // Prints the stored value
    }
};

int main() {  // Main function where program execution starts
    Number first(25);  // Creates a Number object with value 25
    Number second = -first;  // Applies unary minus operator to first and stores the result in second

    std::cout << "Original value: ";  // Displays the label for the original value
    first.display();  // Displays the original value

    std::cout << "Negated value: ";  // Displays the label for the negated value
    second.display();  // Displays the negated value

    return 0;  // Ends the program successfully
}