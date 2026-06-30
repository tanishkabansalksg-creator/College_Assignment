#include <iostream>
using namespace std;

class Box {
    int length;

public:
    void setLength(int length) {
        this->length = length;
    }

    void display() {
        cout << "Length: " << length;
    }
};

int main() {
    Box b;
    b.setLength(10);
    b.display();
    return 0;
}