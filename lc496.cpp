#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int,int> mp;

    for(int n : nums2){
        while(!st.empty() && st.top() < n){
            mp[st.top()] = n;
            st.pop();
        }
        st.push(n);
    }

    for(int &n : nums1)
        n = mp.count(n) ? mp[n] : -1;

    return nums1;
}

int main() {
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Result: ";
    for(int x : result)
        cout << x << " ";

    return 0;
}