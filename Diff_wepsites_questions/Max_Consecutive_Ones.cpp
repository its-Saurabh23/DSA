/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     
     int currentMax = 0;
     int maxi = 0;
     for(int i = 0; i<nums.size(); i++){
         if(nums[i] == 1){
             currentMax ++;
         }
         else{
             maxi = max(maxi,currentMax);
             currentMax = 0; 
         }
     }
     int ans = max(currentMax,maxi);

     return ans;

    }
};
*/
