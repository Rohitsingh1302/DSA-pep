// LeetCode 1523. Count Odd Numbers in an Interval Range
#include <bits/stdc++.h>
using namespace std;

int countOdds(int low, int high) {
    return (high + 1) / 2 - low / 2;
}

int main() {
    int low = 3, high = 7;
    cout << countOdds(low, high);
}