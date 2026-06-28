#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4};
    map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}