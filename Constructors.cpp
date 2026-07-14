#include <iostream>   // cout प्रयोग गर्न आवश्यक
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {   // Constructor
        roll = r;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s1(1001);  // Object बनते ही constructor call हुन्छ
    return 0;
}
