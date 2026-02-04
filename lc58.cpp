#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') i--;  // skip spaces

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s = "Hello World";

    cout << "Length of last word: " << lengthOfLastWord(s);

    return 0;
}
