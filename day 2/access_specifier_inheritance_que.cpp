#include <iostream>
using namespace std;

class A {
public:
    int pubA;
protected:
    int protA;
private:
    int privA;
};

class B : protected A {
public:
    void setValues() {
        pubA = 1;      // Line 1
        protA = 2;     // Line 2
        // privA = 3;     // Line 3
    }
};

class C : public B {
public:
    void test() {
        pubA = 4;      // Line 4
        protA = 5;     // Line 5
        // privA = 6;     // Line 6
    }
};

int main() {
    C obj;
    // obj.pubA = 7;      // Line 7
    // obj.protA = 8;     // Line 8
    // obj.privA = 9;     // Line 9
}
// Explanation:
// Line 1 and 2 will compile successfully because pubA and protA are accessible within the derived class B, but privA is not accessible in B since it is private in A hence line 3 will error.
// Line 4 and 5 will compile successfully because pubA and protA are accessible within the derived class C, but privA is not accessible in C since it doesn't exist in B as line 3 causes compilation error.
// Lines 7, 8, and 9 will cause compilation errors
// because pubA, protA, and privA are not accessible from main.