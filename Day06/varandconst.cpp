#include<iostream>
using namespace std;
int main()
{
    int a=2;
    const int y=3;
     a=5;
     a=57;
    //y=5; //error: assignment of read-only variable ‘y’
    cout<<"a="<<a<<endl;
    cout<<y<<endl;
    return 0;


}