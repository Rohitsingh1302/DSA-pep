#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        for(auto &s : arr)
            mp[s]++;

        for(auto &s : arr)
            if(mp[s] == 1 && --k == 0)
                return s;

        return "";
    }
};

int main() {
    Solution obj;

    vector<string> arr = {"d","b","c","b","c","a"};
    int k = 2;

    cout << obj.kthDistinct(arr, k);

    return 0;
}