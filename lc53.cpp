#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = nums[0], ans = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        sum = max(nums[i], sum + nums[i]);
        ans = max(ans, sum);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << maxSubArray(nums);
    return 0;
}
