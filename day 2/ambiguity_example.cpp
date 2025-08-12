#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "A::show\n"; }
};

class B {
public:
    void show() { cout << "B::show\n"; }
};

class C : public A, public B {
public:
    // using A::show; Use using declaration to resolve ambiguity, by this line we can call A's show method directly
    void show() {
        // A::show(); call A's version, or
        // B::show(); call B's version
        // Overriding show() in C to prevent ambiguity
    }
};

int main() {
    C obj;
    // obj.show(); throws ambiguity error
    obj.A::show(); // Resolving ambiguity by specifying class A
    obj.B::show(); // Resolving ambiguity by specifying class B
    return 0;
}
