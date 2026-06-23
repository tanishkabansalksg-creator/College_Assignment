#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 8, 40, 15};
    int *p = arr;
    int max = *p;

    for (int i = 1; i < 5; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }

    cout << "Largest = " << max;
    return 0;
}