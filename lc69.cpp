// LeetCode 69. Sqrt(x)
#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    long r = x;
    while (r * r > x)
        r = (r + x / r) / 2;
    return r;
}

int main() {
    int x = 8;
    cout << mySqrt(x);
}