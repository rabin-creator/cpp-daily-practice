#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        static int totalStudents;

    public:
        Student(string n, int a) : name(n), age(a) {   // initializer list
            totalStudents++;
        }

        ~Student() {
            totalStudents--;
            cout << name << "'s object destroyed." << endl;
        }

        void introduce() const {
            cout << "My name is " << name << " and I am " << age << " years old." << endl;
        }

        static int getTotalStudents() {
            return totalStudents;
        }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Rabin", 21);
    Student s2("Sita", 22);

    s1.introduce();
    s2.introduce();

    cout << "Total students created: " << Student::getTotalStudents() << endl;
    return 0;
}