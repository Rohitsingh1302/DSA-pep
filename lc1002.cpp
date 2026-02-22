#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<int> minFreq(26, INT_MAX);

    for (string word : words) {
        vector<int> freq(26, 0);

        for (char c : word)
            freq[c - 'a']++;

        for (int i = 0; i < 26; i++)
            minFreq[i] = min(minFreq[i], freq[i]);
    }

    vector<string> result;

    for (int i = 0; i < 26; i++) {
        while (minFreq[i]-- > 0)
            result.push_back(string(1, i + 'a'));
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);
    cout << "Enter words: ";
    for (int i = 0; i < n; i++)
        cin >> words[i];

    vector<string> result = commonChars(words);

    cout << "Common Characters: ";
    for (string s : result)
        cout << s << " ";

    return 0;
}