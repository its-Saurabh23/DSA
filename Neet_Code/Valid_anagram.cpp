#include <bits/stdc++.h>
using namespace std;

bool Anagram(string s, string t)
{
    int n1 = s.length();
    int n2 = t.length();

    if (n1 != n2)
    {
        return false;
    }
    unordered_map<char, int> mp;

    for (char ch : s)          //O(N)    
    {
        mp[ch]++;
    }

    for (char c : t)            //O(N)     
    {
        mp[c]--;
        if (mp[c] < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagra";
    string t = "nagaram";

    bool result = Anagram(s, t);
    if (result)
    {
        cout <<"Valid Anagram " << endl;
    }else{
        cout<<"Not a Valid Anagram "<<endl; 
    }

    return 0;
}