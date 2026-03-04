#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for(auto &op : ops) {
            m = min(m, op[0]);
            n = min(n, op[1]);
        }
        return m * n;
    }
};

int main() {
    Solution obj;
    int m = 3, n = 3;
    vector<vector<int>> ops = {{2,2}, {3,3}};

    cout << "Maximum Count: " 
         << obj.maxCount(m, n, ops) << endl;

    return 0;
}