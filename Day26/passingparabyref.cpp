#include <iostream>
using namespace std;

void test(int *x, int *y) {
    *x = *x + 5;   // modifies original
    *y = *y * 2;   // modifies original
}

int main() {
    int a = 3, b = 4;
    test(&a, &b);
    cout << "Outside function: a=" << a << " b=" << b << endl;
    return 0;
}
