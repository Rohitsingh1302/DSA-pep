#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26,0);
        for(char c : allowed) freq[c-'a'] = 1;

        int count = 0;
        for(string w : words) {
            bool ok = true;
            for(char c : w)
                if(!freq[c-'a']) { ok = false; break; }
            if(ok) count++;
        }
        return count;
    }
};

int main() {
    Solution obj;
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};

    cout << "Consistent Strings: "
         << obj.countConsistentStrings(allowed, words) << endl;

    return 0;
}