#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        for(int x : nums)
            mp[x]++;

        priority_queue<pair<int,int>> pq;

        for(auto &p : mp)
            pq.push({p.second, p.first});

        vector<int> res;

        while(k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    vector<int> ans = obj.topKFrequent(nums, k);

    for(int x : ans)
        cout << x << " ";
}