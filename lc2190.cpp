#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> freq(1001,0);
        int ans = 0;

        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] == key) {
                freq[nums[i+1]]++;
                if(freq[nums[i+1]] > freq[ans])
                    ans = nums[i+1];
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,100,200,1,100};
    int key = 1;

    cout << obj.mostFrequent(nums, key);

    return 0;
}