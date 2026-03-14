// LeetCode 1358 - Number of Substrings Containing All Three Characters
// Git: git commit -m "LeetCode 1358 - Number of Substrings Containing All Three Characters"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int last[3] = {-1, -1, -1};
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
            ans += 1 + min({last[0], last[1], last[2]});
        }
        return ans;
    }
};
int main() {
    Solution obj;
    string s = "abcabc";
    cout << obj.numberOfSubstrings(s);
    return 0;
}