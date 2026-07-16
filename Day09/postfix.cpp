#include<iostream>
using namespace std;
int main ()
{
    int a=4;
    int b= a++ + ++a * 2;
    cout << "The value of a is : " << a << endl; // a becomes 6 after the expression
    cout << "The value of b is : " << b << endl;
return 0;
}