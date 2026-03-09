#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0;

        for(int x : nums) {
            ans += mp[x-k] + mp[x+k];
            mp[x]++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,2,2,1};
    int k = 1;

    cout << obj.countKDifference(nums, k);
    return 0;
}