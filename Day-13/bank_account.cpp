#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount b;
    b.setBalance(5000);
    cout << "Balance: " << b.getBalance();
    return 0;
}