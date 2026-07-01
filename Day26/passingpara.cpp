#include <iostream>
using namespace std;

void test(int x, int y) {
    x = x + 5;   // modifies local copy
    y = y * 2;   // modifies local copy
    cout << "Inside function: x=" << x << " y=" << y << endl;
}

int main() {
    int a = 3, b = 4;
    test(a, b);
    cout << "Outside function: a=" << a << " b=" << b << endl;
    return 0;
}
