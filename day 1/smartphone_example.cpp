#include <iostream>
using namespace std;

class Smartphone {
public:
    string brand;
    int battery;

    void makeCall(string number) {
        cout << "Calling " << number << " from " << brand << endl;
    }
};

int main() {
    Smartphone phone1; // object creation
    phone1.brand = "Samsung";
    phone1.battery = 85;
    phone1.makeCall("+919876543210");

    Smartphone phone2;
    phone2.brand = "Apple";
    phone2.battery = 92;
    phone2.makeCall("+911234567890");

    return 0;
}
