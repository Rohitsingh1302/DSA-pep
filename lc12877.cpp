#include <bits/stdc++.h>
using namespace std;

int findSpecialInteger(vector<int>& a) {
    int n=a.size();
    for(int i=0;i<n;i++){
        if(i+n/4<n && a[i]==a[i+n/4]) return a[i];
    }
    return -1;
}

int main() {
    vector<int> a = {1,2,2,6,6,6,6,7,10};
    cout << findSpecialInteger(a);
    return 0;
}