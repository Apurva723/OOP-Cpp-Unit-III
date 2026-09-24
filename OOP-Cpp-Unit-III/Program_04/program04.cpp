#include <iostream>  // Includes the input/output stream library

class Counter {  // Defines a class named Counter
private:
    int value;  // Declares a private variable to store the counter value

public:
    explicit Counter(int initialValue = 0) : value(initialValue) {}  // Constructor initializes the counter value

    Counter& operator++() {  // Overloads the prefix increment operator
        ++value;  // Increases the value by 1
        return *this;  // Returns the current object
    }

    Counter operator++(int) {  // Overloads the postfix increment operator
        Counter old = *this;  // Stores the current value before incrementing
        ++value;  // Increases the value by 1
        return old;  // Returns the old value
    }

    void display() const {  // Defines a function to display the counter value
        std::cout << value << '\n';  // Prints the current value
    }
};

int main() {  // Main function where program execution starts
    Counter counter(5);  // Creates a Counter object with an initial value of 5

    std::cout << "After prefix increment: ";  // Displays the prefix increment message
    ++counter;  // Performs prefix increment and increases the counter to 6
    counter.display();  // Displays the updated counter value

    std::cout << "Value returned by postfix increment: ";  // Displays the postfix increment message
    Counter oldValue = counter++;  // Stores the old value and then increments the counter

    oldValue.display();  // Displays the value before the postfix increment

    std::cout << "Counter after postfix increment: ";  // Displays the final counter message
    counter.display();  // Displays the counter value after postfix increment

    return 0;  // Ends the program successfully
}