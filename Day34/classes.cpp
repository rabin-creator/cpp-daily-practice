#include <iostream>
using namespace std;

class Student {
   public:
      string name;
      int age;

      void introduce()
       {
         cout << "My name is " << name << " and I am " << age << " years old." << endl;
      }
};

int main() {
   Student s1;          // Object creation
   s1.name = "Rabin";
   s1.age = 21;
   s1.introduce();      // Function call
   return 0;
}
