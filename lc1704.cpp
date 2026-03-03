#include <iostream>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        string v = "aeiouAEIOU";
        int count = 0;

        for(int i = 0; i < s.size()/2; i++)
            if(v.find(s[i]) != string::npos) count++;

        for(int i = s.size()/2; i < s.size(); i++)
            if(v.find(s[i]) != string::npos) count--;

        return count == 0;
    }
};

int main() {
    Solution obj;
    string s = "book";

    if(obj.halvesAreAlike(s))
        cout << "Halves are alike\n";
    else
        cout << "Halves are not alike\n";

    return 0;
}