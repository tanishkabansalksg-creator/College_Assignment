#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData("Tanishka", 101, 95.5);
    s.display();
    return 0;
}