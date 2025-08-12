#include <iostream>
using namespace std;

class Vehicle {  // Base class
public:
    string brand;

    void honk() {
        cout << "Beep beep!\n";
    }
};

class Car : public Vehicle { // Derived class
public:
    string model;

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";  // inherited from Vehicle
    myCar.model = "Corolla"; // from Car itself
    myCar.honk();            // inherited function
    myCar.display();         // Car's own function
}
