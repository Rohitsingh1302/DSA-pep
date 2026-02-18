#include <iostream>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;   // handle negative numbers
        string result = "";
        string hexChars = "0123456789abcdef";

        while (n > 0) {
            result = hexChars[n % 16] + result;
            n /= 16;
        }

        return result;
    }
};

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    Solution obj;
    cout << "Hexadecimal: " << obj.toHex(num) << endl;

    return 0;
}