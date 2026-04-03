#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& a) {
    unordered_map<int,int> m;
    for(int x:a) m[x]++;
        int s=0;
    for(auto &p:m) if(p.second==1) s+=p.first;
    return s;
}
int main() {
    vector<int> a = {1,2,3,2};
    cout << sumOfUnique(a);
    return 0;
}