#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

        vector<int> cnt(60,0);
        int ans = 0;

        for(int t : time) {

            int r = t % 60;

            ans += cnt[(60 - r) % 60];

            cnt[r]++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> time = {30,20,150,100,40};

    cout << obj.numPairsDivisibleBy60(time);

    return 0;
}