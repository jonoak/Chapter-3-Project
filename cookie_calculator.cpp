
#include <iostream>
#include <iomanip> // Required for output formatting like setprecision

void calculateCookies() {
    // Constants for the original recipe which produces 48 cookies.
    const double BASE_SUGAR = 1.5;
    const double BASE_BUTTER = 1.0;
    const double BASE_FLOUR = 2.75;
    const int BASE_COOKIE_YIELD = 48;

    // Variable to hold the user's desired number of cookies.
    int desiredCookies;

    // Prompt the user for how many cookies they want to make with input validation.
    do {
        std::cout << "How many cookies do you want to make? ";
        
        if (!(std::cin >> desiredCookies)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        if (desiredCookies <= 0) {
            std::cout << "Error: Number of cookies must be greater than 0.\n";
            continue;
        }
        
        break;
    } while (true);

    // Calculate the amount of each ingredient needed for the specified number of cookies.
    double requiredSugar = (BASE_SUGAR / BASE_COOKIE_YIELD) * desiredCookies;
    double requiredButter = (BASE_BUTTER / BASE_COOKIE_YIELD) * desiredCookies;
    double requiredFlour = (BASE_FLOUR / BASE_COOKIE_YIELD) * desiredCookies;

    // Display the results, formatted to two decimal places for clarity.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTo make " << desiredCookies << " cookies, you will need:\n";
    std::cout << requiredSugar << " cups of sugar\n";
    std::cout << requiredButter << " cups of butter\n";
    std::cout << requiredFlour << " cups of flour\n";
}
