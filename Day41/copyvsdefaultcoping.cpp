#include <iostream>
#include <string>

using namespace std;

class DefaultBook {
public:
    int pages;
    string* title;

    DefaultBook(string bookTitle, int bookPages) {
        pages = bookPages;
        title = new string(bookTitle);
    }

    // NO custom copy constructor here! We let C++ use default copying.

    ~DefaultBook() {
        // Commented out to prevent the program from crashing instantly during this example!
        // delete title; 
    }
};

int main() {
    // 1. Create original book
    DefaultBook book1("C++ Beginners", 300);
    
    // 2. Default copy happens here
    DefaultBook book2 = book1; 

    // 3. Change book 2's title
    *(book2.title) = "Advanced C++"; 

    // 4. Print both titles
    cout << "Book 1 Title: " << *(book1.title) << "\n";
    cout << "Book 2 Title: " << *(book2.title) << "\n";

    return 0;
}