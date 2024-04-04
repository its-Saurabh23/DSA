// Brute force 
// T.C = o(n*n)
// A.s = O(1);
int n =  nums.size();
for(int i = 0; i<n; i++){
    for(int j = i+1 ;j<n; j++){
        if(nums[i] == nums[j] && abs(i-j)<= k){
            return true;
        }
    }
    return false;
}




// Optiaml Apporach..
// Think about the the storing element in the array and simulatneasoly 
// checking the nums[i] == nums[j];
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     unordered_map<int,int>mp;
     int n = nums.size();
        for(int i= 0; i<n; i++){
            
            if(mp.count(nums[i])){
                
               if(abs(i - mp[nums[i]])<= k){
                   return true;
               } 
            }
            mp[nums[i]] = i;
        }
        return false;
        
    }
};