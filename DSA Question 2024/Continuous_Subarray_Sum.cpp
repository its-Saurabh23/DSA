class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n = nums.size();
    //   modulo concept;
       unordered_map<int,int>mp;
    //    initilaity 
    mp[0] = -1;
    int sum = 0;
    for(int i = 0; i<n; i++){
     sum += nums[i];
        int reminder =  sum%k; 

        if(mp.find(reminder) != mp.end()){
              if(i - mp[reminder] >= 2){
                return true;
            }
         }else{
             mp[reminder] = i; 
         }
    }
    return false;
    }
};


// Try This question again;