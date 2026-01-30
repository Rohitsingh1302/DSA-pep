
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;   // Base case
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num = 12345;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}