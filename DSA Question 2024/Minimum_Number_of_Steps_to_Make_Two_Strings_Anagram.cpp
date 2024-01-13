class Solution {
public:
    int minSteps(string s, string t) {
     int n =  s.length();
     int mp_s[26]={0};
     int mp_t[26] ={0};

      for(int i =0; i<n;i++){
          mp_s[s[i] - 'a']++;
          mp_t[t[i] - 'a']++;
      }
      int result = 0;

      for(int i = 0; i<26;i++){
          
          if(mp_s[i]>mp_t[i]){
            result += mp_s[i] - mp_t[i];
          }
      }
      return result;
    }
}; 
// T.C = O(n)
// S.C  = 26 + 26 character array





class Solution {
public:
    int minSteps(string s, string t) {
     int n =  s.length();
     int mp[26]={0};

      for(int i =0; i<n;i++){
          mp[s[i] - 'a']++;
          mp[t[i] - 'a']--;
      }

      int result = 0;
      for(int i = 0; i<26;i++){
          
          if(mp[i]>0){
            result += mp[i];
          }
      }
      return result;
    }
}; 

// T.C = O(n)
// S.C = 26 only single character array