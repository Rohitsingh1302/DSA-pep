#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }
    
    return 0;
}
