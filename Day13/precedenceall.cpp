#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // 1. Assignment vs Equality
    a = (5 == 10) != 20;
    cout << "Assignment vs Equality: a = " << a << endl;

    // 2. Shift + Assignment
    b = 10;
    b += (2 << 1);   // 2 shifted left by 1 = 4
    cout << "Shift + Assignment: b = " << b << endl;

    // 3. Relational + Logical AND + NOT (with parentheses)
    bool res1 = !( (5 > 2) && 0 );
    cout << "Relational + Logical (with parentheses): " << res1 << endl;

    // 4. Relational + Logical AND + NOT (without parentheses)
    bool res2 = !5 > 2 && 0;
    cout << "Relational + Logical (without parentheses): " << res2 << endl;

    // 5. Arithmetic precedence
    c = 2 + 3 * 4;   // Multiplication before addition
    cout << "Arithmetic precedence: c = " << c << endl;

    // 6. Associativity demo
    int d = 20 / 5 / 2;   // Left-to-right associativity
    cout << "Associativity (division): d = " << d << endl;

    // 7. Right-to-left associativity (assignment)
    int x, y;
    x = y = 5;   // Assignment is right-to-left
    cout << "Associativity (assignment): x = " << x << ", y = " << y << endl;

    return 0;
}
