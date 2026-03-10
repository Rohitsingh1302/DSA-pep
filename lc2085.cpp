#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string,int> a,b;
        int ans = 0;
        for(auto &s : w1) a[s]++;
        for(auto &s : w2) b[s]++;
        for(auto &p : a)
            if(p.second == 1 && b[p.first] == 1)
                ans++;
        return ans;
    }
};
int main() {
    Solution obj;
    vector<string> w1 = {"leetcode","is","amazing","as","is"};
    vector<string> w2 = {"amazing","leetcode","is"};
    cout << obj.countWords(w1, w2);
    return 0;
}