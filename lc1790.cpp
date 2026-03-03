#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;

        vector<int> diff;
        for(int i = 0; i < s1.size(); i++)
            if(s1[i] != s2[i]) diff.push_back(i);

        return diff.size() == 2 &&
               s1[diff[0]] == s2[diff[1]] &&
               s1[diff[1]] == s2[diff[0]];
    }
};

int main() {
    Solution obj;
    string s1 = "bank", s2 = "kanb";

    if(obj.areAlmostEqual(s1, s2))
        cout << "Yes, possible with one swap\n";
    else
        cout << "Not possible\n";

    return 0;
}