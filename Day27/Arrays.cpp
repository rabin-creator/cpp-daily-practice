#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Display elements of the array
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Accessing specific element
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    // Modifying an element
    arr[2] = 99;
    cout << "After modification, third element: " << arr[2] << endl;

    return 0;
}
