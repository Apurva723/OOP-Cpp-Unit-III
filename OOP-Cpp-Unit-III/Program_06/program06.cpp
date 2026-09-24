#include <iostream>  // Includes the input/output stream library

class Distance {  // Defines a class named Distance
private:
    int meters;  // Stores the distance in meters

public:
    explicit Distance(int value) : meters(value) {}  // Constructor initializes the distance

    bool operator>(const Distance& other) const {  // Overloads the greater-than (>) operator
        return meters > other.meters;  // Compares the meters of two Distance objects
    }

    void display() const {  // Defines a function to display the distance
        std::cout << meters << " meters\n";  // Prints the distance in meters
    }
};

int main() {  // Main function where program execution starts
    Distance first(120);  // Creates the first Distance object with 120 meters
    Distance second(90);  // Creates the second Distance object with 90 meters

    std::cout << "First distance: ";  // Displays the label for the first distance
    first.display();  // Displays the first distance

    std::cout << "Second distance: ";  // Displays the label for the second distance
    second.display();  // Displays the second distance

    if (first > second) {  // Checks whether the first distance is greater than the second
        std::cout << "First distance is greater\n";  // Displays the result if the condition is true
    } else {  // Executes when the condition is false
        std::cout << "Second distance is greater or equal\n";  // Displays the result if the second is greater or equal
    }

    return 0;  // Ends the program successfully
}