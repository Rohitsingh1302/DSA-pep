#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i*i <= n; i++)
            if(n % i == 0) return false;
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);
            if(isPrime(bits)) ans++;
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int left = 6, right = 10;

    cout << "Count of numbers with prime set bits: "
         << obj.countPrimeSetBits(left, right) << endl;

    return 0;
}