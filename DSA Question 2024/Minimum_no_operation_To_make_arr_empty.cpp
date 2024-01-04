class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int opt = 0;

        for(int &num:nums){
            mp[num]++;
        }

       for(auto &it : mp){
           int val = it.second;
        
          if(val == 1){
              return -1;
          }
        
         opt += ceil((double)val/3);
       }
       return opt;
    }
};