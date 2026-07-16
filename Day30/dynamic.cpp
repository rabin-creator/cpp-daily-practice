#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n];  // Dynamic allocation
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }

    delete[] arr;  // Manual deallocation
    return 0;
}
