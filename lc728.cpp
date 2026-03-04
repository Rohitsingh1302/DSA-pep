#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for(int i = left; i <= right; i++) {
            int n = i;
            bool ok = true;

            while(n > 0) {
                int digit = n % 10;
                if(digit == 0 || i % digit != 0) {
                    ok = false;
                    break;
                }
                n /= 10;
            }

            if(ok) result.push_back(i);
        }
        return result;
    }
};

int main() {
    Solution obj;
    int left = 1, right = 22;

    vector<int> ans = obj.selfDividingNumbers(left, right);

    cout << "Self Dividing Numbers: ";
    for(int num : ans)
        cout << num << " ";

    return 0;
}