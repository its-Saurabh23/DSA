class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_map<string,int>mp;

        for(auto &path :paths){
            string source = path[0];

            // sotre in map
            // key      value; 
            mp[source] = 1;
        }

        for(auto &i : paths){
            
            string dest = i[1];
            if(mp[dest] != 1){
                return dest;
            }
        }
        return "";
    }
};