// LeetCode 1287 - Element Appearing More Than 25% In Sorted Array
// Git: git commit -m "LeetCode 1287 - Element Appearing More Than 25%"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
            if(arr[i]==arr[i+n/4])
                return arr[i];
        return -1;
    }
};

int main(){
    vector<int> arr={1,2,2,6,6,6,6,7,10};
    Solution obj;
    cout<<obj.findSpecialInteger(arr);
}
