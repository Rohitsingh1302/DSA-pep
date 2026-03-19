
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];

        for(int i = 2; i < arr.size(); i++)
            if(arr[i] - arr[i-1] != d)
                return false;

        return true;
    }
};
int main(){
    vector<int> arr = {3,5,1};
    Solution obj;
    if(obj.canMakeArithmeticProgression(arr))
        cout << "true";
    else
        cout << "false";
    return 0;
}