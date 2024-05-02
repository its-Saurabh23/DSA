class Solution {
    public boolean isAnagram(String s, String t) {
        
        int [] map = new int[26];  // constant space
        
        for(int i = 0; i< s.length(); i++){
            map[s.charAt(i) -'a']++;
        }
        
        for(int i = 0; i<t.length(); i++){
             map[t.charAt(i)-'a']--;
        }
        
        for(int ele: map){
            if(ele != 0){
                return false;
            }
        }
        return true;
    }
}



//Optimal one
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;

        for(const string& ele : strs) {
            // Count frequency of characters
            int freq[26] = {0};
            for(char val : ele) {
                freq[val - 'a']++;
            }

            string key;
            for(int i = 0; i < 26; i++) {
                if(freq[i] != 0) {
                    key += string(1, 'a' + i) + to_string(freq[i]);
                }
            }
            mp[key].push_back(ele);
        }

        // Copy values of map to result
        for(auto& kvp : mp) {
            res.push_back(kvp.second);
        }

        return res;
    }
};
