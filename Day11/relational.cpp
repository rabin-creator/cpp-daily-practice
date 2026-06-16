#include <iostream>
using namespace std;

int main() {
    int a = 10, b;

    // Simple assignment
    b = a;
    cout << "b = a -> b = " << b << endl;

    // Add and assign
    b += 5;  // b = b + 5
    cout << "b += 5 -> b = " << b << endl;

    // Subtract and assign
    b -= 3;  // b = b - 3
    cout << "b -= 3 -> b = " << b << endl;

    // Multiply and assign
    b *= 2;  // b = b * 2
    cout << "b *= 2 -> b = " << b << endl;

    // Divide and assign
    b /= 4;  // b = b / 4
    cout << "b /= 4 -> b = " << b << endl;

    // Modulus and assign
    b %= 3;  // b = b % 3
    cout << "b %= 3 -> b = " << b << endl;

    // Bitwise AND and assign
    b &= 2;  // b = b & 2
    cout << "b &= 2 -> b = " << b << endl;

    // Bitwise OR and assign
    b |= 1;  // b = b | 1
    cout << "b |= 1 -> b = " << b << endl;

    // Bitwise XOR and assign
    b ^= 2;  // b = b ^ 2
    cout << "b ^= 2 -> b = " << b << endl;

    // Left shift and assign
    b <<= 1; // b = b << 1
    cout << "b <<= 1 -> b = " << b << endl;

    // Right shift and assign
    b >>= 1; // b = b >> 1
    cout << "b >>= 1 -> b = " << b << endl;

    return 0;
}