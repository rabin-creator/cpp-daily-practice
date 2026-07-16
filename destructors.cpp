#include <iostream>

class Toy {
public:
    // 1. Constructor (Called when the toy is created)
    Toy() {
        std::cout << "Toy is taken out of the box! (Constructor)\n";
    }

    // 2. Destructor (Called when the toy is put away/destroyed)
    // It always starts with a tilde (~) sign.
    ~Toy() {
        std::cout << "Toy is put back in the box and cleaned up! (Destructor)\n";
    }
};

int main() {
    std::cout << "--- Program Starts ---\n";

    { 
        // We create a "Toy" inside these curly braces
        Toy myToy; 
        std::cout << "Playing with the toy...\n";
    } // <-- The curly brace ends here. 'myToy' is destroyed right here!

    std::cout << "--- Program Ends ---\n";
    return 0;
}