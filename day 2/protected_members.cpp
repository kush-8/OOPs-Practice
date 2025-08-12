#include <iostream>
using namespace std;

class Base {
protected:
    int prot = 42;
};

class Derived : public Base {
public:
    void show() {
        cout << "Protected value: " << prot << endl; // ✅ accessible here
    }
};

int main() {
    Derived d;
    d.show(); // ✅ works
    // d.prot = 5; // ❌ protected, can't access from here
}
