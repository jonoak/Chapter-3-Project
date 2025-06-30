
#include <iostream>
#include <iomanip> // Required for output formatting (setw, setprecision, etc.)
#include <cmath>   // Required for the pow() function

void calculateCompoundInterest() {
    // Declare variables to hold user input and calculated values.
    double principal, interestRate, finalAmount, interestEarned;
    int timesCompounded;

    // Get principal amount with input validation.
    do {
        std::cout << "Enter the principal amount: ";
        
        if (!(std::cin >> principal)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        if (principal <= 0) {
            std::cout << "Error: Principal amount must be greater than 0.\n";
            continue;
        }
        
        break;
    } while (true);

    // Get interest rate with input validation.
    do {
        std::cout << "Enter the annual interest rate (e.g., 4.25 for 4.25%): ";
        
        if (!(std::cin >> interestRate)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        if (interestRate < 0) {
            std::cout << "Error: Interest rate cannot be negative.\n";
            continue;
        }
        
        break;
    } while (true);

    // Get times compounded with input validation.
    do {
        std::cout << "Enter the number of times the interest is compounded per year: ";
        
        if (!(std::cin >> timesCompounded)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        if (timesCompounded <= 0) {
            std::cout << "Error: Times compounded must be greater than 0.\n";
            continue;
        }
        
        break;
    } while (true);

    // Convert the percentage rate to its decimal form for calculation.
    double rateDecimal = interestRate / 100.0;

    // Calculate the final amount in savings using the compound interest formula. 
    finalAmount = principal * pow((1 + rateDecimal / timesCompounded), timesCompounded);

    // Calculate the total interest earned.
    interestEarned = finalAmount - principal;

    // --- Display the Formatted Report ---
    std::cout << "\n----------------------------------------\n";

    // Set output formatting for currency values.
    std::cout << std::fixed << std::setprecision(2);

    // Use manipulators to align the report neatly.
    std::cout << std::left << std::setw(22) << "Interest Rate:" << interestRate << "%\n";
    std::cout << std::setw(22) << "Times Compounded:" << timesCompounded << "\n";
    std::cout << std::setw(22) << "Principal:" << "$ " << principal << "\n";
    std::cout << std::setw(22) << "Interest:" << "$ " << interestEarned << "\n";
    std::cout << std::setw(22) << "Amount in Savings:" << "$ " << finalAmount << "\n";
    
    std::cout << "----------------------------------------\n";
}
