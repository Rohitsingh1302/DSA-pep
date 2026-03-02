#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;

        for(int n : nums) {
            ans += mp[n];
            mp[n]++;
        }
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {1,2,3,1,1,3};

    cout << "Good Pairs: " << obj.numIdenticalPairs(nums) << endl;
    return 0;
}