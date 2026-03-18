// LeetCode 1491 - Average Salary Excluding Min and Max
// Git: git commit -m "LeetCode 1491 - Average Salary Excluding Min and Max"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0, mn=1e9, mx=0;
        for(int x:salary){
            sum+=x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        return (double)(sum-mn-mx)/(salary.size()-2);
    }
};

int main(){
    vector<int> salary = {4000,3000,1000,2000};

    Solution obj;
    cout << obj.average(salary);

    return 0;
}