// T.C. = O(n)

class Solution {
public:
    
    bool allZeros(vector<int>&counter){
        for(auto &i : counter){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
       int n = s.size();
        vector<int>counter(26,0);
        
//         make frequency array
        for(int i = 0; i<p.length(); i++){
            char ch = p[i];
            
            counter[ch-'a']++;
        }
        
//         sliding window
        int i = 0, j= 0;
        vector<int>ans;
        int k = p.length();
        
        while(j<n){
            counter[s[j]-'a']--;
            
//             slide the window
            if(j-i+1 == k){
                if(allZeros(counter)){
                    ans.push_back(i);
                }
//                 increasing the frequency
                counter[s[i]-'a']++;
                
//                 increase the index
                i++;
            }
            j++;
        }
        return ans;
        
    }
};