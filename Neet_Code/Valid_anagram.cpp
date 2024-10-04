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

bool isAnagram(string s, string t) {    

        sort(s.begin(), s.end());   // N(log N)
        sort(t.begin(), t.end());
        if (s.size() != t.size())return false;
        
       for(int i = 0, j= 0; i<s.size(),j<t.size(); i++,j++){
           if(s[i] == t[j]){
               continue;
           }
           else{
               return false;
           }
       }
       return true;
    }

 bool isAnagram(string s, string t) {
        
        // sort and compare
        sort(s.begin(),s.end());  // N(log N);
        sort(t.begin(),t.end());
        if(s==t)return true;

        return false;
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