#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& a) {
    unordered_map<int,int> m;
    int ans=0;
    for(int x:a){
        ans+=m[x];
        m[x]++;
    }
    return ans;
}

int main() {
    vector<int> a = {1,2,3,1,1,3};
    cout << numIdenticalPairs(a);
    return 0;
}