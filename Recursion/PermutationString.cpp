#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(string str, string currentString, vector<string>& ans) {

        // Base case
        if (str == "") {
            ans.push_back(currentString);
            return;
        }

        for (int i = 0; i < str.length(); i++) {

            // Choose
            char ch = str[i];

            currentString += ch;

            // Remove current character
            string remainingString =
                str.substr(0, i) + str.substr(i + 1);

            // Explore
            helper(remainingString, currentString, ans);

            // Undo choice
            currentString.pop_back();
        }
    }

    vector<string> solve(string str) {

        vector<string> ans;

        helper(str, "", ans);

        return ans;
    }
};

int main() {

    string str = "ABC";

    Solution obj;

    vector<string> ans = obj.solve(str);

    for (string s : ans) {
        cout << s << " ";
    }

    return 0;
}
