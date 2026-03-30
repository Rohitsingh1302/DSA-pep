#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& a) {
    unordered_map<int,int> m;
    for(int x:a) m[x]++;
    unordered_set<int> s;
    for(auto &p:m){
        if(s.count(p.second)) return 0;
        s.insert(p.second);
    }
    return 1;
}

int main() {
    vector<int> a = {1,2,2,1,1,3};
    cout << uniqueOccurrences(a);
    return 0;
}