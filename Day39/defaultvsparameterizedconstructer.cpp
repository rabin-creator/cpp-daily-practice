#include <iostream>
#include <string> // <-- This is the header file for using the string class in C++.

using namespace std;

class Student {
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called!" << endl;
    }

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called!" << endl;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Object created using Default Constructor
    Student s1;
    s1.display();

    // Object created using Parameterized Constructor
    Student s2(101, "Rabin");
    s2.display();

    return 0;
}