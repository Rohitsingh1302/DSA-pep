// LeetCode 1572 - Matrix Diagonal Sum
// Git: git commit -m "LeetCode 1572 - Matrix Diagonal Sum"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;

        for(int i = 0; i < n; i++){
            sum += mat[i][i] + mat[i][n - i - 1];
        }

        if(n % 2)
            sum -= mat[n/2][n/2];

        return sum;
    }
};

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Solution obj;
    cout << obj.diagonalSum(mat);

    return 0;
}