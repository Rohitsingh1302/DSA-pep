#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> box(50,0);
        int ans = 0;

        for(int i = lowLimit; i <= highLimit; i++) {
            int n = i, sum = 0;
            while(n) {
                sum += n % 10;
                n /= 10;
            }
            ans = max(ans, ++box[sum]);
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int low = 1, high = 10;

    cout << "Maximum Balls in a Box: "
         << obj.countBalls(low, high) << endl;

    return 0;
}