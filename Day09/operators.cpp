// operators precedence and associativity.
#include<iostream>
using namespace std;
int main()
{
    cout << "operators precedence and associativity" << endl;
    cout << "precedence highest :" << endl;

   cout << " 1. postfix" << endl;
        int a=5;
         cout << "the value of a is :"<< a++ << endl; // prints 5, then a becomes 6
   cout<<" 2. prefix" << endl; 
         cout << "the value of a is : " << ++a << endl; // gives 7 because a=6 rn 
   cout << " 3. binary operators ";
      cout << "*1 .multiplication and division";
         cout << "the value of a is : " << 5*2/3 << endl; // gives 3 because 10/3=3.33
      cout << "*2. addition and subtraction";
         cout << "the value of a is : " << 5+2-3 << endl; // gives 4 because 7-3=4
        return 0;
}
