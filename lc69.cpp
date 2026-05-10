#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    long r = x;
    while (r * r > x) r = (r + x / r) / 2;
    return r;
}

int main() {
    cout << mySqrt(8);
}