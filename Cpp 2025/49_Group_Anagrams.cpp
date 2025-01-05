class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;

        for(string & str: strs){
            string sortedStr = str;

            sort(sortedStr.begin(),sortedStr.end());
            mp[sortedStr].push_back(str);
        }

        for(auto & group:mp){
            ans.push_back(group.second);
        }
        return ans;
    }
};