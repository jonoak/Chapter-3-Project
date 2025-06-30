
#include <iostream>

// Function declarations
void calculateCookies();
void calculateCompoundInterest();
void startMathTutor();

int main() {
    int choice;
    
    do {
        std::cout << "\nWelcome! Choose an option:\n";
        std::cout << "1. Cookie Calculator\n";
        std::cout << "2. Compound Interest Calculator\n";
        std::cout << "3. Math Tutor\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        
        if (!(std::cin >> choice)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        switch(choice) {
            case 1:
                calculateCookies();
                break;
            case 2:
                calculateCompoundInterest();
                break;
            case 3:
                std::cin.ignore(); // Clear input buffer before math tutor
                startMathTutor();
                break;
            case 4:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Error: Please enter a number between 1 and 4.\n";
        }
    } while(choice != 4);
    
    return 0;
}
