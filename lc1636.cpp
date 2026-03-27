// LeetCode 1636 - Sort Array by Increasing Frequency
// Git: git commit -m "LeetCode 1636 - Sort Array by Increasing Frequency"

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> f;
        for(int x : nums) f[x]++;

        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(f[a] == f[b]) return a > b;
            return f[a] < f[b];
        });

        return nums;
    }
};

int main(){
    vector<int> nums = {1,1,2,2,2,3};

    Solution obj;
    vector<int> res = obj.frequencySort(nums);

    for(int x : res) cout << x << " ";
    return 0;
}