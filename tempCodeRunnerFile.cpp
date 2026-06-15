#include <iostream>
#include <string>   // string प्रयोग गर्न आवश्यक
using namespace std;

int main()
{
    string name;              // नाम string मा राख्ने
    cout << "Enter the name: ";
    cin >> name;              // user बाट नाम input लिने
    cout << "You entered: " << name << endl;  // नाम देखाउने
    return 0;                 // प्रोग्राम सफलतापूर्वक समाप्त
}
