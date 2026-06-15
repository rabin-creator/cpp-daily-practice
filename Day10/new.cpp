#include <iostream>

int main() {
    // Standard boolalpha formatting so output prints as true/false instead of 1/0
    std::cout << std::boolalpha;

    // 1. Core Variables
    bool isTrue = true;
    bool isFalse = false;

    std::cout << "--- 1. BASIC LOGICAL OPERATORS ---" << std::endl;
    // Logical NOT (!) flips the boolean value
    std::cout << "NOT (!) True: " << !isTrue << std::endl;   // Output: false
    std::cout << "NOT (!) False: " << !isFalse << std::endl; // Output: true

    // Logical AND (&&) returns true ONLY if both sides are true
    std::cout << "True && False: " << (isTrue && isFalse) << std::endl; // Output: false
    std::cout << "True && True:  " << (isTrue && isTrue) << std::endl;  // Output: true

    // Logical OR (||) returns true if AT LEAST ONE side is true
    std::cout << "True || False: " << (isTrue || isFalse) << std::endl; // Output: true
    std::cout << "False || False: " << (isFalse || isFalse) << std::endl; // Output: false


    std::cout << "\n--- 2. CONDITIONAL EXPRESSION (From Video) ---" << std::endl;
    // Varun Sir uses a conditional expression example: (10 < 20 && 10 > 15)
    // 10 < 20 evaluates to True, 10 > 15 evaluates to False. True && False = False.
    if (10 < 20 && 10 > 15) {
        std::cout << "Condition met!" << std::endl;
    } else {
        std::cout << "Condition failed because (10 > 15) is False." << std::endl;
    }


    std::cout << "\n--- 3. OPERATOR PRECEDENCE & ASSOCIATIVITY ---" << std::endl;
    // The video emphasizes Precedence Order: 
    // 1st: NOT (!) -> Right-to-Left
    // 2nd: AND (&&) -> Left-to-Right
    // 3rd: OR (||) -> Left-to-Right
    
    // Video Expression: true || false || false && !false
    // Step 1 (NOT): !false becomes true -> true || false || false && true
    // Step 2 (AND): false && true becomes false -> true || false || false
    // Step 3 (OR - Left to Right): true || false becomes true -> true || false
    // Step 4 (OR): true || false becomes true.
    
    bool complexResult = true || false || false && !false;
    std::cout << "Result of (true || false || false && !false): " << complexResult << std::endl; 
    // Output: true

    return 0;
}