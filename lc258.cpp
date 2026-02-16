// LeetCode 258. Add Digits
#include <bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    return num == 0 ? 0 : 1 + (num - 1) % 9;
}

int main() {
    int num = 38;
    cout << addDigits(num);
}