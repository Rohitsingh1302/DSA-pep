#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;

        for(int n : nums) mp[n]++;
        for(auto &p : mp)
            if(p.second == 1) sum += p.first;

        return sum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3,2};

    cout << "Sum of Unique Elements: " 
         << obj.sumOfUnique(nums) << endl;

    return 0;
}