#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string &str, string &word) {
    if (str.length() != word.length()) return false;

    vector<int> arr(26, 0);

    for (char c : str) {
        arr[c - 'a']++;
    }

    for (char c : word) {
        arr[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            return false;
        }
    }
    return true;
}

int solve(string &text, string &word) {
    string str = "";
    int start = 0;
    int len = word.length();
    int count = 0;

    for (int i = 0; i < text.length(); i++) {
        str += text[i];

        if (i - start + 1 == len) {
            if (isAnagram(str, word)) {
                count++;
            }
            str.erase(0, 1);
            start++;
        }   
    }
    return count;
}

int main() {
    
// count of occurrences of the anagrams
    string text = "gotxxotogatog";
    string word = "got";

    int count = solve(text, word);
    cout << count << endl;

    return 0;
}
