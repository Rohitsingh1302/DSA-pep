#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int x : arr)
            mp[x]++;

        int ans = -1;

        for(auto &p : mp)
            if(p.first == p.second)
                ans = max(ans, p.first);

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {2,2,3,4};

    cout << obj.findLucky(arr);

    return 0;
}