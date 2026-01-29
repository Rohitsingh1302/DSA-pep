#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        if ((n & (n - 1)) != 0) return false;
        return (n & 0x55555555) != 0;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (sol.isPowerOfFour(n)) {
        cout << n << " is a power of four" << endl;
    } else {
        cout << n << " is not a power of four" << endl;
    }
    
    return 0;
}
