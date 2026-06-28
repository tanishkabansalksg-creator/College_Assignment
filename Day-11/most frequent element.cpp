#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 1};
    map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int maxFreq = 0, ans;

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            ans = x.first;
        }
    }

    cout << "Most Frequent: " << ans;
    return 0;
}