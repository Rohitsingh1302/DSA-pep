#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string w, char ch) {
    int i=0;
    while(i<w.size() && w[i]!=ch) i++;
    if(i<w.size()) reverse(w.begin(),w.begin()+i+1);
    return w;
}

int main() {
    string w = "abcdefd";
    char ch = 'd';
    cout << reversePrefix(w,ch);
    return 0;
}