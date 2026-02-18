#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((sqrt(1 + 8LL * n) - 1) / 2);
    }
};

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    Solution obj;
    cout << "Complete rows: " << obj.arrangeCoins(n) << endl;

    return 0;
}