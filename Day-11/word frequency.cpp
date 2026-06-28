#include <iostream>
#include <map>
using namespace std;

int main() {
    string words[] = {"apple", "banana", "apple", "mango"};
    map<string, int> freq;

    for (string w : words) {
        freq[w]++;
    }

    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}