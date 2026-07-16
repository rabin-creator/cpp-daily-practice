#include <iostream>
using namespace std;

void f(int x) {
    if (x > 0) {              // Base condition
        cout << x << " ";     // Print before recursive call
        f(x - 2);             // Recursive call with smaller input
        cout << x << " ";     // Print after recursive call
    }
}

int main() {
    f(5);   // Start recursion
    return 0;
}
