#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;

        for(int x : arr)
            mp[x]++;

        vector<int> freq;
        for(auto &p : mp)
            freq.push_back(p.second);

        sort(freq.begin(), freq.end());

        int count = freq.size();

        for(int f : freq) {
            if(k >= f) {
                k -= f;
                count--;
            } else
                break;
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {5,5,4};
    int k = 1;

    cout << obj.findLeastNumOfUniqueInts(arr, k);

    return 0;
}