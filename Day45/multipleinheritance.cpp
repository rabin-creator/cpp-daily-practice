#include <iostream>
#include <string>

// First base class
class Printer {
public:
    void printDocument(const std::string& doc) {
        std::cout << "[Printer] Printing document: " << doc << std::endl;
    }
};

// Second base class
class Scanner {
public:
    void scanDocument(const std::string& doc) {
        std::cout << "[Scanner] Scanning document: " << doc << std::endl;
    }
};

// Derived class inheriting from BOTH Printer and Scanner
class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void copyDocument(const std::string& doc) {
        std::cout << "--- Starting Copy Job ---" << std::endl;
        // Using functionality inherited from Scanner
        scanDocument(doc);
        // Using functionality inherited from Printer
        printDocument(doc);
        std::cout << "--- Copy Job Complete ---" << std::endl;
    }
};

int main() {
    MultiFunctionPrinter mfp;

    // Derived object can call methods from both base classes directly
    mfp.printDocument("Resume.pdf");
    mfp.scanDocument("TaxForm.pdf");

    std::cout << std::endl;

    // Derived object can also call its own combined logic
    mfp.copyDocument("ID_Card.png");

    return 0;
}