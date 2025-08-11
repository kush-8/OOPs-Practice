#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor with validation
    Student(string n, int a) {
        // using setter methods for validation
        setName(n);
        setAge(a);
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for name
    void setName(const string& n) {
        if (!n.empty()) {
            name = n;
        } else {
            cout << "Name cannot be empty." << endl;
        }
    }

    // Setter for age with validation
    void setAge(int a) {
        if (a >= 5 && a <= 100) {
            age = a;
        } else {
            cout << "Age must be between 5 and 100." << endl;
        }
    }

    // Method to display student info
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student("Alice", 20);
    student.displayInfo();

    student.setAge(22);
    student.displayInfo();

    student.setAge(4);    // Invalid
    student.setName("");  // Invalid

    return 0;
}
