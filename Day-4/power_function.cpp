#include <iostream>


int power(int a, int b) {
    int result = 1;
    for(int i = 1; i <= b; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
    return 0;
}