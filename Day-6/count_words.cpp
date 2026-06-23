#include <iostream>
using namespace std;

int main() {
    string s;
    int words = 1;

    cout << "Enter sentence: ";
    getline(cin, s);

    for (char ch : s) {
        if (ch == ' ')
            words++;
    }

    cout << "Words = " << words;
    return 0;
}