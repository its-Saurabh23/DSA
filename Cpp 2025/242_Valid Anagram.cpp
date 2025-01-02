class Solution {
public:
    bool isAnagram(string s, string t) {
     int n1 = s.length();
     int n2 = t.length();

     if(n1 != n2)return false;

     unordered_map<char,int>mp;

     for(char ch :s){
         mp[ch]++;
     }

     for(char ch:t){
          mp[ch]--;
          if(mp[ch]<0){
            return false;
          }
     }
     return true;
    }
};