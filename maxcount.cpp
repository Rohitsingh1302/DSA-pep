#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0)
                zeroCount++;

            // agar ek se zyada 0 ho gaye
            while (zeroCount > 1) {
                if (nums[left] == 0)
                    zeroCount--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
