#include <iostream> // Includes the input-output stream library.
#include <string> // Includes the string library.

class Payment { // Defines the abstract Payment class.
public: // Starts the public section of the Payment class.
    virtual void pay(double amount) const = 0; // Declares a pure virtual function for making a payment.
    virtual ~Payment() = default; // Defines a virtual destructor for the Payment class.
}; // Ends the Payment class.

class CardPayment : public Payment { // Defines CardPayment class that inherits from Payment.
public: // Starts the public section of the CardPayment class.
    void pay(double amount) const override { // Overrides the pay function of the Payment class.
        std::cout << "Paid Rs. " << amount << " using card\n"; // Prints the card payment details.
    } // Ends the pay function.
}; // Ends the CardPayment class.

class UpiPayment : public Payment { // Defines UpiPayment class that inherits from Payment.
public: // Starts the public section of the UpiPayment class.
    void pay(double amount) const override { // Overrides the pay function of the Payment class.
        std::cout << "Paid Rs. " << amount << " using UPI\n"; // Prints the UPI payment details.
    } // Ends the pay function.
}; // Ends the UpiPayment class.

class NetBankingPayment : public Payment { // Defines NetBankingPayment class that inherits from Payment.
public: // Starts the public section of the NetBankingPayment class.
    void pay(double amount) const override { // Overrides the pay function of the Payment class.
        std::cout << "Paid Rs. " << amount << " using net banking\n"; // Prints the net banking payment details.
    } // Ends the pay function.
}; // Ends the NetBankingPayment class.

void processPayment(const Payment& payment, double amount) { // Defines a function to process any type of payment.
    payment.pay(amount); // Calls the appropriate pay function using runtime polymorphism.
} // Ends the processPayment function.

int main() { // Main function where program execution begins.
    CardPayment card; // Creates an object of the CardPayment class.
    UpiPayment upi; // Creates an object of the UpiPayment class.
    NetBankingPayment netBanking; // Creates an object of the NetBankingPayment class.

    processPayment(card, 1250.0); // Processes a card payment of Rs. 1250.
    processPayment(upi, 750.0); // Processes a UPI payment of Rs. 750.
    processPayment(netBanking, 500.0); // Processes a net banking payment of Rs. 500.

    return 0; // Ends the program successfully.
} // Ends the main function.