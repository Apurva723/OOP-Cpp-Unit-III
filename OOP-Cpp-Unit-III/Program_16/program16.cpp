#include <iostream> // Includes the input-output stream library.
#include <string> // Includes the string library.
#include <utility> // Includes utility functions such as std::move.

class Employee { // Defines the abstract Employee base class.
protected: // Starts the protected section of the Employee class.
    int employeeId; // Stores the employee ID.
    std::string name; // Stores the employee name.

public: // Starts the public section of the Employee class.
    Employee(int id, std::string employeeName) // Defines the Employee constructor.
        : employeeId(id), name(std::move(employeeName)) {} // Initializes employee ID and moves the employee name.

    virtual double calculateSalary() const = 0; // Declares a pure virtual function to calculate salary.

    void displayBasicDetails() const { // Defines a function to display basic employee details.
        std::cout << "Employee ID: " << employeeId << '\n'; // Displays the employee ID.
        std::cout << "Name: " << name << '\n'; // Displays the employee name.
    } // Ends the displayBasicDetails function.

    virtual ~Employee() = default; // Defines a virtual destructor for the Employee class.
}; // Ends the Employee class.

class PermanentEmployee : public Employee { // Defines PermanentEmployee class that inherits from Employee.
private: // Starts the private section of the PermanentEmployee class.
    double basicSalary; // Stores the basic salary.
    double allowance; // Stores the additional allowance.

public: // Starts the public section of the PermanentEmployee class.
    PermanentEmployee(int id, std::string employeeName, double basic, double extra) // Defines the PermanentEmployee constructor.
        : Employee(id, std::move(employeeName)), basicSalary(basic), allowance(extra) {} // Initializes the base class and salary details.

    double calculateSalary() const override { // Overrides the calculateSalary function.
        return basicSalary + allowance; // Calculates and returns the total salary.
    } // Ends the calculateSalary function.
}; // Ends the PermanentEmployee class.

class ContractEmployee : public Employee { // Defines ContractEmployee class that inherits from Employee.
private: // Starts the private section of the ContractEmployee class.
    double hourlyRate; // Stores the payment rate per hour.
    int hoursWorked; // Stores the number of hours worked.

public: // Starts the public section of the ContractEmployee class.
    ContractEmployee(int id, std::string employeeName, double rate, int hours) // Defines the ContractEmployee constructor.
        : Employee(id, std::move(employeeName)), hourlyRate(rate), hoursWorked(hours) {} // Initializes the base class and contract details.

    double calculateSalary() const override { // Overrides the calculateSalary function.
        return hourlyRate * hoursWorked; // Calculates salary using hourly rate and hours worked.
    } // Ends the calculateSalary function.
}; // Ends the ContractEmployee class.

void printPaySlip(const Employee& employee) { // Defines a function to print an employee's payslip.
    employee.displayBasicDetails(); // Displays the employee's basic details.
    std::cout << "Salary: Rs. " << employee.calculateSalary() << "\n\n"; // Calculates and displays the employee's salary.
} // Ends the printPaySlip function.

int main() { // Main function where program execution begins.
    PermanentEmployee permanentEmployee(101, "Asha", 40000.0, 8000.0); // Creates a permanent employee object.
    ContractEmployee contractEmployee(102, "Vikas", 500.0, 80); // Creates a contract employee object.

    printPaySlip(permanentEmployee); // Prints the payslip of the permanent employee.
    printPaySlip(contractEmployee); // Prints the payslip of the contract employee.

    return 0; // Ends the program successfully.
} // Ends the main function.