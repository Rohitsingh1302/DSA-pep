#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    return n > 0 &&
           (n & (n - 1)) == 0 &&
           (n & 0x55555555);
}

int main() {
    int n;
    cin >> n;
    cout << (isPowerOfFour(n) ? "true" : "false");
    return 0;
}