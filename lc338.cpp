#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n + 1);

    for(int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = countBits(n);

    for(int x : result)
        cout << x << " ";

    return 0;
}