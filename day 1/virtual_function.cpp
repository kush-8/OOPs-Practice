#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() const = 0; // Pure virtual function
    virtual ~Vehicle() {} // Virtual destructor for proper cleanup
};

class Car : public Vehicle {
public:
    void startEngine() const override {
        cout << "Car engine started" << endl;
    }
};

class Bike : public Vehicle {
public:
    void startEngine() const override {
        cout << "Bike engine started" << endl;
    }
};

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car();    
    vehicles[1] = new Bike();

    for (int i = 0; i < 2; ++i) {
        vehicles[i]->startEngine();
    }

    for (int i = 0; i < 2; ++i) {
        delete vehicles[i]; // Clean up memory
    }

    return 0;
}
