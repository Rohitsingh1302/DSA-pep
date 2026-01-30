#include <iostream>
using namespace std;

void print(int n);  // Forward declaration

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
void print(int n) {
    if (n == 0) return;   // Base case
    print(n - 1);         // Recursive call
    cout << n << " ";     // Print current number
}

