#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2};
    map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int query = 2;
    cout << "Frequency of " << query << " = " << freq[query];

    return 0;
}