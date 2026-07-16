#include<iostream>
using namespace std;
int main ()
{
    int a=1;
    int b= a++ + a++ + --a ;
    cout << "The value of a is : " << a << endl; // a becomes 2 after the expression
    cout << "The value of b is : " << b << endl; // b becomes 5 after the expression
return 0;
}