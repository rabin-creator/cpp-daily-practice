#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Adding elements dynamically
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector elements are: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Demonstrating dynamic resizing
    cout << "Size before adding more: " << numbers.size() << endl;
    numbers.push_back(40);
    numbers.push_back(50);
    cout << "Size after adding more: " << numbers.size() << endl;

    // Removing last element
    numbers.pop_back();
    cout << "Size after removing one: " << numbers.size() << endl;

    // Traversing using range-based for loop
    cout << "Final vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}