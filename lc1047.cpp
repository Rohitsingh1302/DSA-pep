#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    string t="";
    for(char c:s){
        if(!t.empty() && t.back()==c) t.pop_back();
        else t+=c;
    }
    return t;
}

int main() {
    string s = "abbaca";
    cout << removeDuplicates(s);
    return 0;
}