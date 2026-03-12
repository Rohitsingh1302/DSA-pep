// LeetCode 1209 - Remove All Adjacent Duplicates in String II
// Git: git commit -m "Solved LeetCode 1209 - Stack approach"

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> st;

        for(char c : s){
            if(!st.empty() && st.back().first == c)
                st.back().second++;
            else
                st.push_back({c,1});

            if(st.back().second == k)
                st.pop_back();
        }

        string res="";
        for(auto &p:st)
            res += string(p.second,p.first);

        return res;
    }
};

int main(){
    Solution obj;
    string s = "deeedbbcccbdaa";
    int k = 3;

    cout << obj.removeDuplicates(s,k);

    return 0;
}