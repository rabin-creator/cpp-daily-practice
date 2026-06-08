#include<iostream>
using namespace std;
int x; // global variable (default initialized to 0)

int main()
{
    int y; // local variable (uninitialized)
    cout << x << endl;  // prints 0
    cout << y << endl;  // prints garbage value (undefined)
    return 0;
}
