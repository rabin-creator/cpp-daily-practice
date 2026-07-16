#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "--- Relational Operators in C++ ---" << endl;
    cout << "Value of a: " << a << ", Value of b: " << b << endl << endl;

    // By default, C++ outputs booleans as 1 (true) or 0 (false)
    // We use boolalpha to print literal "true" or "false" text
    cout << boolalpha; 

    // 1. Equal to (==)
    cout << "Is a equal to b? (a == b): " << (a == b) << endl;

    // 2. Not equal to (!=)
    cout << "Is a not equal to b? (a != b): " << (a != b) << endl;

    // 3. Greater than (>)
    cout << "Is a greater than b? (a > b): " << (a > b) << endl;

    // 4. Less than (<)
    cout << "Is a less than b? (a < b): " << (a < b) << endl;

    // 5. Greater than or equal to (>=)
    cout << "Is a greater than or equal to b? (a >= b): " << (a >= b) << endl;

    // 6. Less than or equal to (<=)
    cout << "Is a less than or equal to b? (a <= b): " << (a <= b) << endl;

    return 0;
}