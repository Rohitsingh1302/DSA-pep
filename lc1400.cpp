// LeetCode 1400 - Construct K Palindrome Strings
// Git: git commit -m "LeetCode 1400 - Construct K Palindrome Strings"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k > s.size()) return false;

        vector<int> f(26,0);
        for(char c : s)
            f[c-'a']++;

        int odd = 0;
        for(int x : f)
            if(x % 2) odd++;

        return odd <= k;
    }
};
int main(){
    string s = "annabelle";
    int k = 2;

    Solution obj;
    if(obj.canConstruct(s,k))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}