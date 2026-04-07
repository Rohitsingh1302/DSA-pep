#include <bits/stdc++.h>
using namespace std;
int countPoints(string r) {
    vector<set<char>> v(10);
    for(int i=0;i<r.size();i+=2)
        v[r[i+1]-'0'].insert(r[i]);
    int ans=0;
    for(auto &s:v) if(s.size()==3) ans++;
    return ans;
}
int main() {
    string r = "B0B6G0R6R0R6G9";
    cout << countPoints(r);
    return 0;
}