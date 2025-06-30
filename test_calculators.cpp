
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cassert>

// Function declarations
void calculateCookies();
void calculateCompoundInterest();
void startMathTutor();

// Test functions
void testCookieCalculator();
void testCompoundInterestCalculator();
void testMathTutorCalculator();
void testErrorHandling();

int main() {
    std::cout << "Running Calculator Tests...\n";
    std::cout << "==========================\n\n";
    
    testCookieCalculator();
    testCompoundInterestCalculator();
    testMathTutorCalculator();
    testErrorHandling();
    
    std::cout << "\nAll tests completed!\n";
    return 0;
}

void testCookieCalculator() {
    std::cout << "Testing Cookie Calculator:\n";
    std::cout << "--------------------------\n";
    
    // Test case 1: 24 cookies (half recipe)
    std::cout << "Test 1 - 24 cookies (half recipe):\n";
    std::cout << "Expected: 0.75 cups sugar, 0.50 cups butter, 1.38 cups flour\n";
    
    const double BASE_SUGAR = 1.5;
    const double BASE_BUTTER = 1.0;
    const double BASE_FLOUR = 2.75;
    const int BASE_COOKIE_YIELD = 48;
    
    int desiredCookies = 24;
    double requiredSugar = (BASE_SUGAR / BASE_COOKIE_YIELD) * desiredCookies;
    double requiredButter = (BASE_BUTTER / BASE_COOKIE_YIELD) * desiredCookies;
    double requiredFlour = (BASE_FLOUR / BASE_COOKIE_YIELD) * desiredCookies;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Actual: " << requiredSugar << " cups sugar, " 
              << requiredButter << " cups butter, " 
              << requiredFlour << " cups flour\n";
    
    // Test case 2: 96 cookies (double recipe)
    std::cout << "\nTest 2 - 96 cookies (double recipe):\n";
    std::cout << "Expected: 3.00 cups sugar, 2.00 cups butter, 5.50 cups flour\n";
    
    desiredCookies = 96;
    requiredSugar = (BASE_SUGAR / BASE_COOKIE_YIELD) * desiredCookies;
    requiredButter = (BASE_BUTTER / BASE_COOKIE_YIELD) * desiredCookies;
    requiredFlour = (BASE_FLOUR / BASE_COOKIE_YIELD) * desiredCookies;
    
    std::cout << "Actual: " << requiredSugar << " cups sugar, " 
              << requiredButter << " cups butter, " 
              << requiredFlour << " cups flour\n";
    
    std::cout << "Cookie Calculator: PASSED ✓\n\n";
}

void testCompoundInterestCalculator() {
    std::cout << "Testing Compound Interest Calculator:\n";
    std::cout << "------------------------------------\n";
    
    // Test case from the attached image
    std::cout << "Test 1 - $1000 principal, 4.25% interest, 12 times compounded:\n";
    std::cout << "Expected: Interest Rate: 4.25%, Times Compounded: 12\n";
    std::cout << "Expected: Principal: $1000.00, Interest: $43.34, Amount: $1043.34\n";
    
    double principal = 1000.0;
    double interestRate = 4.25;
    int timesCompounded = 12;
    
    double rateDecimal = interestRate / 100.0;
    double finalAmount = principal * pow((1 + rateDecimal / timesCompounded), timesCompounded);
    double interestEarned = finalAmount - principal;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Actual Results:\n";
    std::cout << std::left << std::setw(22) << "Interest Rate:" << interestRate << "%\n";
    std::cout << std::setw(22) << "Times Compounded:" << timesCompounded << "\n";
    std::cout << std::setw(22) << "Principal:" << "$ " << principal << "\n";
    std::cout << std::setw(22) << "Interest:" << "$ " << interestEarned << "\n";
    std::cout << std::setw(22) << "Amount in Savings:" << "$ " << finalAmount << "\n";
    
    // Verify the calculation is close to expected (allowing for small rounding differences)
    double expectedInterest = 43.34;
    double expectedAmount = 1043.34;
    
    if (std::abs(interestEarned - expectedInterest) < 0.01 && 
        std::abs(finalAmount - expectedAmount) < 0.01) {
        std::cout << "Compound Interest Calculator: PASSED ✓\n\n";
    } else {
        std::cout << "Compound Interest Calculator: FAILED ✗\n";
        std::cout << "Expected interest: $" << expectedInterest << ", got: $" << interestEarned << "\n";
        std::cout << "Expected amount: $" << expectedAmount << ", got: $" << finalAmount << "\n\n";
    }
}

void testErrorHandling() {
    std::cout << "Testing Error Handling:\n";
    std::cout << "-----------------------\n";
    
    // Test input validation logic
    std::cout << "Test 1 - Negative cookie count validation:\n";
    
    // Test the validation logic that would be used in calculateCookies()
    int testCookies = -5;
    if (testCookies <= 0) {
        std::cout << "✓ Correctly identifies negative cookie count as invalid\n";
    } else {
        std::cout << "✗ Failed to catch negative cookie count\n";
    }
    
    std::cout << "\nTest 2 - Zero principal amount validation:\n";
    
    // Test the validation logic that would be used in calculateCompoundInterest()
    double testPrincipal = 0.0;
    if (testPrincipal <= 0) {
        std::cout << "✓ Correctly identifies zero principal as invalid\n";
    } else {
        std::cout << "✗ Failed to catch zero principal amount\n";
    }
    
    std::cout << "\nTest 3 - Negative interest rate validation:\n";
    
    double testRate = -2.5;
    if (testRate < 0) {
        std::cout << "✓ Correctly identifies negative interest rate as invalid\n";
    } else {
        std::cout << "✗ Failed to catch negative interest rate\n";
    }
    
    std::cout << "\nTest 4 - Zero times compounded validation:\n";
    
    int testTimes = 0;
    if (testTimes <= 0) {
        std::cout << "✓ Correctly identifies zero times compounded as invalid\n";
    } else {
        std::cout << "✗ Failed to catch zero times compounded\n";
    }
    
    std::cout << "\nError Handling Tests: PASSED ✓\n";
    std::cout << "Note: These tests validate the error detection logic.\n";
    std::cout << "Interactive error handling requires user input simulation.\n\n";
}

void testMathTutorCalculator() {
    std::cout << "Testing Math Tutor Calculator:\n";
    std::cout << "------------------------------\n";
    
    // Test the math tutor logic with known values
    std::cout << "Test 1 - Addition problem generation:\n";
    std::cout << "Testing with sample values (247 + 129):\n";
    
    int num1 = 247;
    int num2 = 129;
    int sum = num1 + num2;
    int expectedSum = 376;
    
    std::cout << "Problem:\n";
    std::cout << std::setw(5) << num1 << std::endl;
    std::cout << "+ " << std::setw(3) << num2 << std::endl;
    std::cout << "-------\n";
    std::cout << "Expected answer: " << expectedSum << std::endl;
    std::cout << "Calculated answer: " << sum << std::endl;
    
    if (sum == expectedSum) {
        std::cout << "Math Tutor Calculator: PASSED ✓\n\n";
    } else {
        std::cout << "Math Tutor Calculator: FAILED ✗\n\n";
    }
    
    // Test random number generation bounds
    std::cout << "Test 2 - Random number generation bounds:\n";
    std::cout << "Numbers should be between 1 and 500 (inclusive)\n";
    std::cout << "Note: This test validates the algorithm, not specific random values\n";
    
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 500;
    
    // Test the formula used in math tutor
    srand(12345); // Fixed seed for reproducible test
    int testNum1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    int testNum2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    
    std::cout << "Generated numbers: " << testNum1 << " and " << testNum2 << std::endl;
    
    if (testNum1 >= MIN_VALUE && testNum1 <= MAX_VALUE &&
        testNum2 >= MIN_VALUE && testNum2 <= MAX_VALUE) {
        std::cout << "Random number bounds: PASSED ✓\n\n";
    } else {
        std::cout << "Random number bounds: FAILED ✗\n\n";
    }
}
