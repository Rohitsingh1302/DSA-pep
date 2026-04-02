#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string a, vector<string>& w) {
    vector<int> f(26,0);
    for(char c:a) f[c-'a']=1;
    int ans=0;
    for(auto &s:w){
        bool ok=1;
        for(char c:s) if(!f[c-'a']) ok=0;
        ans+=ok;
    }
    return ans;
}

int main() {
    string allowed = "ab";
    vector<string> w = {"ad","bd","aaab","baa","badab"};
    cout << countConsistentStrings(allowed,w);
    return 0;
}