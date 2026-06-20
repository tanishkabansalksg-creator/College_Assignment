#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};

    cout << a[0][0]+b[0][0] << " " << a[0][1]+b[0][1] << endl;
    cout << a[1][0]+b[1][0] << " " << a[1][1]+b[1][1];

    return 0;
}