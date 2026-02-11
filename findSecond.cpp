#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 20, 8};

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    if (secondLargest == INT_MIN)
        cout << "No second largest element";
    else
        cout << "Second largest element is: " << secondLargest;

    return 0;
}
