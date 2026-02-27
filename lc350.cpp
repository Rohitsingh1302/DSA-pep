#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq;
    vector<int> result;

    // Count frequency of nums1
    for(int num : nums1)
        freq[num]++;

    // Check nums2
    for(int num : nums2) {
        if(freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }

    return result;
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter elements: ";
    for(int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter elements: ";
    for(int i = 0; i < n2; i++)
        cin >> nums2[i];

    vector<int> ans = intersect(nums1, nums2);

    cout << "Intersection: ";
    for(int x : ans)
        cout << x << " ";

    return 0;
}