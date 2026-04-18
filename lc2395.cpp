#include <bits/stdc++.h>
using namespace std;

bool findSubarrays(vector<int>& a) {
    unordered_set<int> s;
    for(int i=0;i+1<a.size();i++){
        int sum=a[i]+a[i+1];
        if(s.count(sum)) return 1;
        s.insert(sum);
    }
    return 0;
}

int main() {
    vector<int> a = {4,2,4};
    cout << findSubarrays(a);
    return 0;
}