#include <bits/stdc++.h>

using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{

    // base case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exlcude
    solve(str, output, index + 1, ans);

    // include

    char element = str[index];
    output.push_back(element);

    solve(str, output, index + 1, ans);
}

int main()
{
    vector<string> ans;
    string str = "abc";
    string output = "";
    int index = 0;
    solve(str, output, index, ans);

    //    i< ans.length() is not working
    // use  size function
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}