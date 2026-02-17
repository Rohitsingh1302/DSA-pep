// LeetCode 263. Ugly Number
#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n) {
    if(n <= 0) return false;
    for(int d : {2,3,5})
        while(n % d == 0) n /= d;
    return n == 1;
}

int main() {
    cout << isUgly(6);   // 1 (true)
}