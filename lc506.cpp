#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    vector<string> result(n);

    vector<pair<int,int>> arr;  // {score, original index}
    for (int i = 0; i < n; i++)
        arr.push_back({score[i], i});

    sort(arr.rbegin(), arr.rend());  // sort descending

    for (int i = 0; i < n; i++) {
        if (i == 0) result[arr[i].second] = "Gold Medal";
        else if (i == 1) result[arr[i].second] = "Silver Medal";
        else if (i == 2) result[arr[i].second] = "Bronze Medal";
        else result[arr[i].second] = to_string(i + 1);
    }

    return result;
}

int main() {
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> ans = findRelativeRanks(score);

    for (string s : ans)
        cout << s << " ";

    return 0;
}