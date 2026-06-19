#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, si;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    si = (principal * rate * time) / 100;

    cout << "Simple Interest = " << si;

    return 0;
}