#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end());

    if (s.size() < 3)
        return *s.rbegin();

    auto it = s.rbegin();
    advance(it, 2);
    return *it;
}

int main() {
    vector<int> nums = {3, 2, 1};
    cout << thirdMax(nums);
    return 0;
}