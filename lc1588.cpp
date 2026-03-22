// LeetCode 1588 - Sum of All Odd Length Subarrays
// Git: git commit -m "LeetCode 1588 - Sum of All Odd Length Subarrays"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(), res = 0;

        for(int i=0;i<n;i++){
            int total = (i+1)*(n-i);
            int odd = (total+1)/2;
            res += odd * arr[i];
        }

        return res;
    }
};
int main(){
    vector<int> arr = {1,4,2,5,3};

    Solution obj;
    cout << obj.sumOddLengthSubarrays(arr);

    return 0;
}
