#include <iostream>

using namespace std;

class Demo {
private:
    int a;       // Private
protected:
    int b;       // Protected
public:
    int c = 0;  // Public (initialized)

    void setValues() {
        a = 10; b = 20; c = 30;
    }
    void show() {
        cout << a << " " << b << " " << c;
    }
};

class Child : public Demo {
public:
    void access() {
        // a = 10; ❌ Error (Private)
        b = 20;   // ✅ Allowed (Protected)
        c = 30;   // ✅ Allowed (Public)
    }
};

int main() {
    Demo d;
    d.setValues();   // ✅ Allowed (Public)
    d.show();        // ✅ Allowed (Public)
    // d.a = 5; ❌ Error (Private)
    // d.b = 10; ❌ Error (Protected)
    d.c = 40;        // ✅ Allowed (Public)
    return 0;
}
