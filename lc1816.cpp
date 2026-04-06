#include <bits/stdc++.h>
using namespace std;
string truncateSentence(string s, int k) {
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') cnt++;
        if(cnt==k) return s.substr(0,i);
    }
    return s;
}
int main() {
    string s = "Hello how are you Contestant";
    int k = 4;
    cout << truncateSentence(s,k);
    return 0;
}