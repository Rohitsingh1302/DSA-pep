#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26,0);

        for(char c : magazine)
            count[c-'a']++;

        for(char c : ransomNote)
            if(--count[c-'a'] < 0)
                return false;

        return true;
    }
};

int main() {
    Solution obj;

    string ransomNote = "aa";
    string magazine = "aab";

    if(obj.canConstruct(ransomNote, magazine))
        cout << "True";
    else
        cout << "False";

    return 0;
}