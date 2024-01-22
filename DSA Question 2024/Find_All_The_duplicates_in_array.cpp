class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int>mp;
      
    for(auto &it: nums){
        mp[it]++;
    }
    vector<int>result;

    for(int i = 1;i<=n; i++){
        auto it = mp.find(i);
        if(it != mp.end() && it->second >= 2 ){
            result.push_back(i);
        }
    }
    return result;

    }
};