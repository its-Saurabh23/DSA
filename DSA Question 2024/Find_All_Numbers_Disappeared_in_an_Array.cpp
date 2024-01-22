class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>result;
        unordered_map<int,int>mp;

        for(auto &it :nums){
            mp[it]++;
        }
       
       for(int i = 1; i<=n; i++){
          if(mp.find(i) == mp.end()){
              result.push_back(i);
          }           
       }
       return result;
    }
};