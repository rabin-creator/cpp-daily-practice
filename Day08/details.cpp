// understanding the operators precedence and associativity
#include <iostream>
using namespace std;
 main()
{   // **BINARY OPERATORS**
    // addition:
    cout << "enter any two numbers : ";
    int a,b ;
    cin >> a >> b;
    cout <<" the sum of the given numbers is : "<< a+b <<endl;
    // multipication:
     int x,y;
    cout << "enter the numbers any two: ";
    cin >>  x >> y ;
    cout << " the product if the numbers is  : "  << x *y << endl;
    // division:
     int p,q;
    cout << "enter the numbers any two :";
    cin >>  p >> q ;
    cout << " The divison of the numbers is :" << p/q << endl;
    cout << " The modulo division of the numbers is  : " << p%q << endl;
     
     // **UNARY OPERATORS**
     // pre-increment :
     int f;
    cout << "enter any  num :";
    cin >> f  ;
    cout << " the pre-increment operator is as :" << ++f << endl  ;
    // pre-decrement :
     int g;
    cout << "enter any  num :"<< endl;
    cin >> g ;
    cout << " the pre-decrement operator is as :" << --g<< endl ;


    // post-increment :
     int h;
    cout << "enter any  num :";
    cin >> h  ;
    cout << " the post-increment operator is as :" << h++ << endl  ;
    // post-decrement :
     int i;
    cout << "enter any  num :";
    cin >> i ;
    cout << " the post-decrement operator is as :" << i--  << endl ;
    







    // ==========================================
    // 1. PRE-INCREMENT OPERATOR (++value)
    // ==========================================
    int value;
    cout << "Enter an initial integer for Pre-Increment: ";
    cin >> value; // Let's say you enter 10

    // Rule: Increment the value first, then use/assign it
    int preResult = ++value; 

    cout << "The value assigned to preResult is : " << preResult << endl; // Will print 11
    cout << "The actual state of 'value' now is   : " << value << endl;     // Will print 11
    cout << "------------------------------------------" << endl;


    // ==========================================
    // 2. POST-INCREMENT OPERATOR (number++)
    // ==========================================
    int number;
    cout << "Enter an initial integer for Post-Increment: ";
    cin >> number; // Let's say you enter 10

    // Rule: Use/assign the original value first, then increment it in the background
    int postResult = number++; 

    cout << "The value assigned to postResult is: " << postResult << endl; // Will print 10
    cout << "The actual state of 'number' now is  : " << number << endl;     // Will print 11
    
    return 0;

}