// Majority Element
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1,1,2,1,3,5,1};
    int cand = 0, cnt = 0;

    for (int x : a) {
        if (cnt == 0) cand = x;
        cnt += (x == cand) ? 1 : -1;
    }

    cnt = count(a.begin(), a.end(), cand);
    cout << (cnt > a.size()/2 ? cand : -1);
}
