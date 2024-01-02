class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>>v;

    unordered_map<int,int>mp;
    int n = nums.size();
    for(int i = 0; i<n; i++){
       int freq = mp[nums[i]];
       if(freq == v.size()){
        //    create a new row
        v.push_back({});
       }
       v[freq].push_back(nums[i]);

       // update the element frequency
       mp[nums[i]]++; 
    } 
   return v;
    }
};