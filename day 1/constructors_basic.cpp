#include <iostream>
#include <string>
using namespace std;

class Smartphone {
public:
    string brand;
    int battery;

    // Constructor
    Smartphone(string b, int bat) {
        brand = b;
        battery = bat;
    }

    void makeCall(string number) {
        cout << "Calling " << number << " from " << brand << endl;
    }
};

int main() {
    // Creating objects using the constructor
    Smartphone phone1("Samsung", 85);
    phone1.makeCall("+919876543210");

    Smartphone phone2("Apple", 92);
    phone2.makeCall("+911234567890");

    return 0;
}
