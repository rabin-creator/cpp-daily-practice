#include <iostream>
using namespace std;

int main() {
    int a, b, c, marks;

    // Input values
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter third number: ";
    cin >> c;

    cout << "Enter your marks: ";
    cin >> marks;

    // 1️⃣ Find maximum of two numbers
    int max2 = (a > b ? a : b);
    cout << "Maximum of " << a << " and " << b << " is: " << max2 << endl;

    // 2️⃣ Find maximum of three numbers
    int max3 = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    cout << "Maximum of " << a << ", " << b << ", " << c << " is: " << max3 << endl;

    // 3️⃣ Pass/Fail check
    cout << "Result: " << (marks >= 40 ? "Pass" : "Fail") << endl;

    // 4️⃣ Even/Odd check
    cout << a << " is " << (a % 2 == 0 ? "Even" : "Odd") << endl;

    return 0;
}
