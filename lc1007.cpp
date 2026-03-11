#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int check(int x, vector<int>& A, vector<int>& B) {
        int a = 0, b = 0;

        for(int i = 0; i < A.size(); i++) {
            if(A[i] != x && B[i] != x) return -1;
            if(A[i] != x) a++;
            if(B[i] != x) b++;
        }

        return min(a, b);
    }

    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int res = check(A[0], A, B);
        return res != -1 ? res : check(B[0], A, B);
    }
};

int main() {
    Solution obj;

    vector<int> A = {2,1,2,4,2,2};
    vector<int> B = {5,2,6,2,3,2};

    cout << obj.minDominoRotations(A, B);

    return 0;
}