#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    vector<char> v;

    v.push_back(s[0]);
    for (int i = 0; s[i]; i++)
    {
        if (!v.empty() && v[v.size() - 1] == s[i])
        {
            v.pop_back();
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    s = "";
    for (int i = 0; i < v.size(); i++)
    {
        s = s + v[i];
    }
    cout << "sting are -> " << endl;
    for (int i = 0; i < s.length() - 1; i++)
    {
        cout << " " << s[i];
    }
}
int main()
{

    string s = {'a', 'b', 'b', 'a', 'c', 'a'};
    removeDuplicate(s);
    return 0;
}
