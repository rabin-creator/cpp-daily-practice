#include <iostream>
using namespace std;

// Forward declaration
class B;

class A {
private:
    int dataA;

public:
    A(int val) : dataA(val) {}

    // Friend function declaration
    friend void showData(const A& obj);

    // Friend class declaration
    friend class B;
};

// Friend function definition
void showData(const A& obj) {
    cout << "Accessing private data of A using friend function: " 
         << obj.dataA << endl;
}

class B {
public:
    void display(const A& obj) {
        cout << "Accessing private data of A using friend class: " 
             << obj.dataA << endl;
    }
};

int main() {
    A objA(42);
    B objB;

    // Using friend function
    showData(objA);

    // Using friend class
    objB.display(objA);

    return 0;
}
