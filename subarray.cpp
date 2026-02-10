// Max Circular Subarray Sum
#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& a){
    int cur=a[0], best=a[0];
    for(int i=1;i<a.size();i++)
        best=max(best, cur=max(a[i],cur+a[i]));
    return best;
}

int main(){
    vector<int> a = {8,-8,9,-9,10,-11,12};
    int total=accumulate(a.begin(),a.end(),0);

    int normal = kadane(a);
    for(int &x:a) x=-x;
    int circular = total + kadane(a);

    cout << (circular==0 ? normal : max(normal,circular));
}
