#include <iostream>
using namespace std;

int main() {
    int arr[5];  // Static allocation, size fixed at compile time
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    return 0;
}
