#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSum = 0;

        // first window
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // slide the window
        for (int i = k; i < n; i++) {
            windowSum += nums[i];      // add next
            windowSum -= nums[i - k];  // remove left
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};
