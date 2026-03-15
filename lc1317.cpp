// LeetCode 1317 - Convert Integer to the Sum of Two No-Zero Integers
// Git: git commit -m "LeetCode 1317 - Convert Integer to the Sum of Two No-Zero Integers"

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool valid(int x){
        while(x){
            if(x%10==0) return false;
            x/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int a=1;a<n;a++)
            if(valid(a) && valid(n-a))
                return {a,n-a};
        return {};
    }
};
int main(){
    int n = 11;
    Solution obj;
    vector<int> ans = obj.getNoZeroIntegers(n);
    cout << ans[0] << " " << ans[1];
    return 0;
}