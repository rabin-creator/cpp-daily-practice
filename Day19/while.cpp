#include <iostream>
using namespace std;

int main() {
    // Example 1: Simple counting loop
    cout << "=== Example 1: Counting Loop ===" << endl;
    int i = 1;
    while (i <= 5) {
        cout << "i = " << i << endl;
        i++;
    }

    // Example 2: Sentinel-controlled loop
    cout << "\n=== Example 2: Sentinel Loop (enter 0 to stop) ===" << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        cout << "You entered: " << num << endl;
        cout << "Enter another number (0 to stop): ";
        cin >> num;
    }

    // Example 3: Infinite loop (demonstration only)
    cout << "\n=== Example 3: Infinite Loop Demo ===" << endl;
    int count = 0;
    while (true) {
        cout << "This runs until count reaches 3" << endl;
        count++;
        if (count == 3) break; // break to avoid endless loop
    }

    return 0;
}
