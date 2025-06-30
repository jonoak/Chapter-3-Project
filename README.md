
# Calculator Suite

A C++ program with three different calculators:

1. **Cookie Calculator** - Adjusts ingredient amounts based on desired number of cookies
2. **Compound Interest Calculator** - Calculates compound interest earnings
3. **Math Tutor** - Generates random addition problems for practice

## How to Build and Run

```bash
make
./main
```

## How to Run Tests

```bash
make test
./test
```

## Test Results

```
clang++ -g -Wall -Werror -o test test_calculators.cpp cookie_calculator.cpp compound_interest.cpp math_tutor.cpp

Running Calculator Tests...
==========================

Testing Cookie Calculator:
--------------------------
Test 1 - 24 cookies (half recipe):
Expected: 0.75 cups sugar, 0.50 cups butter, 1.38 cups flour
Actual: 0.75 cups sugar, 0.50 cups butter, 1.38 cups flour

Test 2 - 96 cookies (double recipe):
Expected: 3.00 cups sugar, 2.00 cups butter, 5.50 cups flour
Actual: 3.00 cups sugar, 2.00 cups butter, 5.50 cups flour
Cookie Calculator: PASSED ✓

Testing Compound Interest Calculator:
------------------------------------
Test 1 - $1000 principal, 4.25% interest, 12 times compounded:
Expected: Interest Rate: 4.25%, Times Compounded: 12
Expected: Principal: $1000.00, Interest: $43.34, Amount: $1043.34
Actual Results:
Interest Rate:        4.25%
Times Compounded:     12
Principal:            $ 1000.00
Interest:             $ 43.34
Amount in Savings:    $ 1043.34
Compound Interest Calculator: PASSED ✓

Testing Math Tutor Calculator:
------------------------------
Test 1 - Addition problem generation:
Testing with sample values (247 + 129):
Problem:
247  
+ 129
-------
Expected answer: 376
Calculated answer: 376
Math Tutor Calculator: PASSED ✓

Test 2 - Random number generation bounds:
Numbers should be between 1 and 500 (inclusive)
Note: This test validates the algorithm, not specific random values
Generated numbers: 500 and 322
Random number bounds: PASSED ✓

Testing Error Handling:
-----------------------
Test 1 - Negative cookie count validation:
✓ Correctly identifies negative cookie count as invalid

Test 2 - Zero principal amount validation:
✓ Correctly identifies zero principal as invalid

Test 3 - Negative interest rate validation:
✓ Correctly identifies negative interest rate as invalid

Test 4 - Zero times compounded validation:
✓ Correctly identifies zero times compounded as invalid

Error Handling Tests: PASSED ✓
Note: These tests validate the error detection logic.
Interactive error handling requires user input simulation.


All tests completed!
```

## Files

- `main.cpp` - Main program with menu system
- `cookie_calculator.cpp` - Cookie ingredient calculator
- `compound_interest.cpp` - Compound interest calculator
- `math_tutor.cpp` - Math tutoring with random problems
- `test_calculators.cpp` - Test suite for all calculators
- `Makefile` - Build configuration
