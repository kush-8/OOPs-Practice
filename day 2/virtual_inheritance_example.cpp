#include <iostream>
using namespace std;

class A {
public:
    virtual void show() { cout << "A's show\n"; }
};

class B : virtual public A {
public:
    void show() override { cout << "B's show\n"; }
};

class C : virtual public A {
public:
    void show() override { cout << "C's show\n"; }
};

// class D : public B, public C {
// public:
//     No override here
// };

int main() {
    // D obj;
    // obj.show();
    return 0;
}
