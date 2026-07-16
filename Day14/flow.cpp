#include <iostream>
using namespace std ;
int main (){
    
int age;
bool citizen;
cout << "Enter age: ";
cin >> age;
cout << "Are you a citizen? (1 for yes, 0 for no): ";
cin >> citizen;

if (age >= 18) {
    if (citizen) {
        cout << "You can vote.";
    }
    else {
        cout << "You must be a citizen to vote.";
    }
}
else {
    cout << "You are underage.";
}

}
