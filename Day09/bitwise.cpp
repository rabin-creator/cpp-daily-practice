#include<iostream>
using namespace std;
int main()
{
    int a=5 , b=3;
    cout<<"bitwise and is : " << (a&b) << endl;
    cout<< "bitwise or is : " << (a|b) << endl;
    cout << " bitwise XOR is : " << (a^b) << endl;
    cout << " bitwisw Not is : " << (~a) << endl;
    cout << " Leftshift is : " <<  ( a<<b )<< endl; // → shift left 3 bits → 0101 → 0101000 = 40
    cout << " Rightshift is : " << ( a>>b )<< endl; // → shift right 3 bits → 0101 → 0000 = 0
    return 0;

}