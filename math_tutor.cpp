
#include <iostream>
#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for the time() function
#include <iomanip>  // Required for setw() to align numbers

void startMathTutor() {
    // Seed the random number generator with the current time.
    // This ensures you get different random numbers each time the program runs.
    srand(time(0));

    // Define the range for the random numbers.
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 500;

    // Declare variables for the two random numbers and their sum.
    int num1, num2, sum, userAnswer;

    // Generate two random numbers within the specified range.
    num1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    num2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

    // Calculate the sum.
    sum = num1 + num2;

    // Display the addition problem, using setw() for alignment.
    std::cout << "Here is your addition problem:\n\n";
    std::cout << std::setw(5) << num1 << std::endl;
    std::cout << "+ " << std::setw(3) << num2 << std::endl;
    std::cout << "-------\n";

    // Get user's answer with input validation.
    do {
        std::cout << "\nWhat is your answer? ";
        
        if (!(std::cin >> userAnswer)) {
            std::cout << "Error: Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        break;
    } while (true);

    // Display the correct solution and feedback.
    std::cout << "\nThe correct answer is: " << sum << std::endl;
    
    if (userAnswer == sum) {
        std::cout << "Congratulations! You got it right!\n";
    } else {
        std::cout << "Sorry, that's not correct. Keep practicing!\n";
    }
}



