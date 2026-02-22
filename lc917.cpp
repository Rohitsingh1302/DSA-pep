#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        if (!isalpha(s[i])) i++;
        else if (!isalpha(s[j])) j--;
        else swap(s[i++], s[j--]);
    }

    return s;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Output: " << reverseOnlyLetters(s);
    return 0;
}