#include <iostream>
#include <string>
using namespace std;

bool isLongPressedName(string name, string typed) {
    int i = 0, j = 0;

    while (j < typed.size()) {
        if (i < name.size() && name[i] == typed[j]) {
            i++;
            j++;
        }
        else if (j > 0 && typed[j] == typed[j - 1]) {
            j++;
        }
        else {
            return false;
        }
    }

    return i == name.size();
}

int main() {
    string name, typed;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter typed: ";
    cin >> typed;

    if (isLongPressedName(name, typed))
        cout << "True";
    else
        cout << "False";

    return 0;
}