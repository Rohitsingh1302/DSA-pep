#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        string word;
        
        stringstream ss1(s1), ss2(s2);

        while(ss1 >> word) mp[word]++;
        while(ss2 >> word) mp[word]++;

        vector<string> res;

        for(auto &p : mp)
            if(p.second == 1)
                res.push_back(p.first);

        return res;
    }
};
int main() {
    Solution obj;
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";

    vector<string> ans = obj.uncommonFromSentences(s1, s2);
    for(string s : ans)
        cout << s << " ";
    return 0;
}