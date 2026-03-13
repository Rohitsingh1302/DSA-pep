// LeetCode 1249 - Minimum Remove to Make Valid Parentheses
// Git: git commit -m "LeetCode 1249 - Minimum Remove to Make Valid Parentheses"

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
                else s[i]='#';
            }
        }

        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }

        string res="";
        for(char c:s)
            if(c!='#') res+=c;

        return res;
    }
};

int main(){
    Solution obj;
    string s="a)b(c)d";
    cout<<obj.minRemoveToMakeValid(s);
}