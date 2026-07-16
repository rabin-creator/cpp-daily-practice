#include <iostream>
using namespace std;

// Function to print array elements
void printArray(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to modify array elements
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // Double each element
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array:" << endl;
    printArray(numbers, size);

    // Passing array to function
    modifyArray(numbers, size);

    cout << "Modified array:" << endl;
    printArray(numbers, size);

    return 0;
}
