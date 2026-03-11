

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, ans = 0;

        for(int r = 0; r < nums.size(); r++) {
            if(nums[r] == 0) k--;

            while(k < 0)
                if(nums[l++] == 0) k++;

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    cout << obj.longestOnes(nums, k);

    return 0;
}