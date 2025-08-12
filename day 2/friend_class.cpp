#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;
public:
    Engine(int hp) : horsepower(hp) {}
    friend class Car; // Car can access Engine's private members
};

class Car {
private:
    Engine engine;
public:
    Car(int hp) : engine(hp) {}

    void showSpecs() {
        cout << "Horsepower: " << engine.horsepower << endl; // ✅ allowed
    }
};

int main() {
    Car car(250);
    car.showSpecs();
}
