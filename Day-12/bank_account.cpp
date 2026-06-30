#include <iostream>
using namespace std;

class BankAccount {
    float balance;

public:
    BankAccount() {
        balance = 1000;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        balance -= amount;
    }

    void display() {
        cout << "Balance: " << balance;
    }
};

int main() {
    BankAccount b;
    b.deposit(500);
    b.withdraw(200);
    b.display();
    return 0;
}