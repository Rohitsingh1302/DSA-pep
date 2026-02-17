// LeetCode 326. Power of Three
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}

int main() {
    cout << isPowerOfThree(27);   // 1 (true)
}