#include <bits/stdc++.h>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

    // base cse
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
int main()
{
    string digit = "123";
    if (digit.length() == 0)
    {
        cout << " hi";
    }
    vector<string> ans;
    string output;
    int index = 0;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digit, output, index, ans, mapping);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}