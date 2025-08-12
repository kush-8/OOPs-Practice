#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's show()" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // This will call A's show() method without ambiguity
    // Explanation:
    // In this case, D inherits from both B and C, which both inherit from A.
    // The virtual inheritance ensures that there is only one instance of A in the hierarchy.
    // If we had not used virtual inheritance, there would have been ambiguity because D would have had two copies of A (one from B and one from C).
    return 0;
}
