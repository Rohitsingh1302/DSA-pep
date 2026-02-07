#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int ans = 0;

    while (l < r) {
        int h = min(height[l], height[r]);
        ans = max(ans, h * (r - l));
        if (height[l] < height[r]) l++;
        else r--;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++) cin >> height[i];

    cout << maxArea(height);
    return 0;
}
