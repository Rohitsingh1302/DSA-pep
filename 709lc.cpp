#include <iostream>
using namespace std;

string toLowerCase(string s) {
    for (char &c : s) {
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);
    cout << toLowerCase(s);
    return 0;
}
