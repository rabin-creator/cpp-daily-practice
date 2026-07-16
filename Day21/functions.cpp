#include <iostream>
using namespace std;

// 1. Function with no parameters and no return type
void greet() {
    // This function just prints a message
    cout << "Hello! This is a simple function example." << endl;
}

// 2. Function with parameters but no return type
void displaySum(int a, int b) {
    // This function calculates sum and prints it
    cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
}

// 3. Function with parameters and return type
int add(int a, int b) {
    // This function returns the sum of two numbers
    return a + b;
}

// 4. Function with default parameters
int multiply(int a, int b = 2) {
    // If second argument is not passed, b = 2 by default
    return a * b;
}

int main() {
    // Calling function with no parameters
    greet();

    // Calling function with parameters but no return type
    displaySum(5, 3);

    // Calling function with parameters and return type
    int result = add(10, 20);
    cout << "Result of add(10,20): " << result << endl;

    // Calling function with default parameter
    cout << "multiply(5): " << multiply(5) << endl;     // Uses default b=2
    cout << "multiply(5,4): " << multiply(5,4) << endl; // Overrides default

    return 0;
}
