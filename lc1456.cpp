// LeetCode 1456 - Maximum Number of Vowels in a Substring of Given Length
// Git: git commit -m "LeetCode 1456 - Maximum Number of Vowels in Substring"

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0, ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(string("aeiou").find(s[i]) != string::npos) cnt++;

            if(i >= k && string("aeiou").find(s[i-k]) != string::npos) cnt--;

            ans = max(ans, cnt);
        }
        return ans;
    }
};

int main(){
    string s = "abciiidef";
    int k = 3;

    Solution obj;
    cout << obj.maxVowels(s, k);

    return 0;
}