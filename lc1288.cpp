// LeetCode 1288 - Remove Covered Intervals
// Git: git commit -m "LeetCode 1288 - Remove Covered Intervals"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(),
            [](vector<int>& a, vector<int>& b) {
                if (a[0] == b[0]) return a[1] > b[1];
                return a[0] < b[0];
            });

        int count = 0, end = 0;

        for (auto& i : intervals) {
            if (i[1] > end) {
                count++;
                end = i[1];
            }
        }

        return count;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,4},{3,6},{2,8}};
    Solution obj;
    cout << obj.removeCoveredIntervals(intervals);
    return 0;
}