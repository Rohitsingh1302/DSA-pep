#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        for(auto &p : mp)
            if(p.second % 2)
                return false;

        return true;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3,2,3,2,2,2};

    if(obj.divideArray(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}