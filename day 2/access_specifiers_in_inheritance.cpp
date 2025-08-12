#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class DerivedPublic : public Base {
public:
    void show() {
        cout << pub << endl;   // ✅ public in base → public here
        cout << prot << endl;  // ✅ protected in base → protected here
        // cout << priv;       // ❌ private in base → not accessible
    }
};

class DerivedProtected : protected Base {
public:
    void show() {
        cout << pub << endl;   // ✅ public in base → protected here
        cout << prot << endl;  // ✅ protected in base → protected here
    }
};

class DerivedPrivate : private Base {
public:
    void show() {
        cout << pub << endl;   // ✅ public in base → private here
        cout << prot << endl;  // ✅ protected in base → private here
    }
};

int main() {
    DerivedPublic dp;
    dp.pub = 10;  // ✅ public here
    // dp.prot = 20; // ❌ protected, not accessible here

    DerivedProtected dpr;
    // dpr.pub = 10; // ❌ now protected in this class

    DerivedPrivate dprv;
    // dprv.pub = 10; // ❌ now private in this class
}
