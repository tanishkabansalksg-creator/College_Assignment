#include <iostream>
using namespace std;

class Car {
    static int count;

public:
    Car() {
        count++;
    }

    static void showCount() {
        cout << "Total Cars: " << count;
    }
};

int Car::count = 0;

int main() {
    Car c1, c2, c3;
    Car::showCount();
    return 0;
}