#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
    unordered_set<int> s1(a.begin(),a.end()), s2(b.begin(),b.end());
    vector<int> x,y;
    for(int i:s1) if(!s2.count(i)) x.push_back(i);
    for(int i:s2) if(!s1.count(i)) y.push_back(i);
    return {x,y};
}

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {2,4,6};
    auto res = findDifference(a,b);
    for(auto &v:res){
        for(int x:v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}