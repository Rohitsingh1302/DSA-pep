// LeetCode 268. Missing Number
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size(), sum = n*(n+1)/2;
    for(int x : nums) sum -= x;
    return sum;
}

int main() {
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);   // 2
}