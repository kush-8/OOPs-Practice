#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
public:
    BankAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    // Declare friend function
    friend void showAccount(const BankAccount& acc);
};

// Friend function definition
void showAccount(const BankAccount& acc) {
    // Can access private members
    cout << "Holder: " << acc.accountHolder << endl;
    cout << "Balance: " << acc.balance << endl;
}

int main() {
    BankAccount acc("Alice", 1500);
    showAccount(acc); // ✅ works even though it accesses private members
}
