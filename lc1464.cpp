// LeetCode 1464 - Maximum Product of Two Elements in an Array
// Git: git commit -m "LeetCode 1464 - Maximum Product of Two Elements"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = 0, b = 0;

        for(int x : nums){
            if(x > a){
                b = a;
                a = x;
            } else if(x > b){
                b = x;
            }
        }
        return (a-1)*(b-1);
    }
};

int main(){
    vector<int> nums = {3,4,5,2};

    Solution obj;
    cout << obj.maxProduct(nums);

    return 0;
}