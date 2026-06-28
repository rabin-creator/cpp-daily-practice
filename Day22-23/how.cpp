#include <iostream>
using namespace std;

// Function Two
void functionTwo(int result) {
    cout << "Result is: " << result << endl;
}

// Function One
void functionOne(int a, int b) {
    int sum = a + b;   // Local variable
    functionTwo(sum);  // Call another function
}

// Main Function
int main() {
    int num1 = 10, num2 = 20;  // Local variables
    functionOne(num1, num2);   // Call functionOne
    return 0;
}
