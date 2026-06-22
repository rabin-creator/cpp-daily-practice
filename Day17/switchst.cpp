#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected option 1: Addition" << endl;
            break;
        case 2:
            cout << "You selected option 2: Subtraction" << endl;
            break;
        case 3:
            cout << "You selected option 3: Multiplication" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1-3." << endl;
    }

    return 0;
}
