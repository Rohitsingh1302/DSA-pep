#include <vector>
#include <algorithm>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int j = 0;  // Position for next non-zero

        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] != 0) {
                std::swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
