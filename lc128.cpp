#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for (int n : s) {
        if (!s.count(n - 1)) {
            int len = 1;
            while (s.count(n + len)) len++;
            longest = max(longest, len);
        }
    }
    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << longestConsecutive(nums);
    return 0;
}
