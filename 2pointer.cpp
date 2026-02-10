// Trapping Rain Water
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> h = {3,0,2,0,4};
    int l=0,r=h.size()-1,lm=0,rm=0,ans=0;

    while(l<r){
        if(h[l]<h[r]){
            lm=max(lm,h[l]);
            ans+=lm-h[l++];
        } else {
            rm=max(rm,h[r]);
            ans+=rm-h[r--];
        }
    }
    cout<<ans;
}
