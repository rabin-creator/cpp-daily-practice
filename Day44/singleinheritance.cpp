#include <iostream>
#include <string>
using namespace std;

// Base Class (Parent)
class Animal {
public:
    string name;

    void eat() {
        cout << name << " is eating food." << endl;
    }
};

// Derived Class (Child) inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << name << " says: Woof! Woof!" << endl;
    }
};

int main() {
    // Create an object of the derived class (Dog)
    Dog myDog;

    // Set attribute inherited from Animal class
    myDog.name = "Buddy";

    // Call method inherited from Animal class
    myDog.eat();

    // Call method defined in Dog class
    myDog.bark();

    return 0;
}