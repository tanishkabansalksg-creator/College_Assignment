#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 40, 15, 30};
    int largest = arr[0], second = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
    }

    cout << second;
    return 0;
}