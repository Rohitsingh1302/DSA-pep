#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(), 0);
        stack<int> st;

        for (int i = 0; i < temp.size(); i++) {
            while (!st.empty() && temp[i] > temp[st.top()]) {
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;
            }
            st.push(i);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> temp = {73,74,75,71,69,72,76,73};
    vector<int> res = sol.dailyTemperatures(temp);

    for (int x : res) cout << x << " ";
}
