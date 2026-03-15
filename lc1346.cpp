// LeetCode 1346 - Check If N and Its Double Exist
// Git: git commit -m "LeetCode 1346 - Check If N and Its Double Exist"

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(int x : arr){
            if(s.count(2*x) || (x%2==0 && s.count(x/2)))
                return true;
            s.insert(x);
        }
        return false;
    }
};

int main(){
    vector<int> arr = {10,2,5,3};
    Solution obj;

    if(obj.checkIfExist(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}