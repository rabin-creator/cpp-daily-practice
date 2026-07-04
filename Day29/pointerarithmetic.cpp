#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // pointer to first element

    cout << "Array elements using pointer arithmetic:" << endl;

    // Access elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "*(p + " << i << ") = " << *(p + i) << endl;
    }

    // Demonstrate incrementing pointer
    cout << "\nPointer increment demonstration:" << endl;
    cout << "*p = " << *p << endl;     // prints 10
    cout << "*(++p) = " << *(++p) << endl; // moves to next element, prints 20
    cout << "*(p++) = " << *(p++) << endl; // prints 20, then moves to next element
    cout << "*p = " << *p << endl;     // now prints 30

    // Demonstrate pointer subtraction
    int *start = &arr[1]; // points to 20
    int *end = &arr[4];   // points to 50
    cout << "\nNumber of elements between arr[1] and arr[4]: "
         << (end - start) << endl;

    return 0;
}
