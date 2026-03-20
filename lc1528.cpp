// LeetCode 1528 - Shuffle String
// Git: git commit -m "LeetCode 1528 - Shuffle String"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& idx) {
        string res = s;
        for(int i=0;i<s.size();i++)
            res[idx[i]] = s[i];
        return res;
    }
};

int main(){
    string s = "code";
    vector<int> idx = {3,1,2,0};

    Solution obj;
    cout << obj.restoreString(s, idx);

    return 0;
}