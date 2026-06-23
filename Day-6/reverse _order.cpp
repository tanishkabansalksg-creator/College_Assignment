#include <iostream>


int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    for (int i = s.length()-1; i >= 0; i--)
        cout << s[i];

    return 0;
}