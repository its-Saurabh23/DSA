class Solution {
public:
    bool monotonicDecreasing(vector<int>&nums){
          int n = nums.size(); 
          for(int i = 1;i<n;i++){
              if(nums[i]>= nums[i-1])continue;
              else
              return false;
          }
          return 1;
    }

    bool monotonicIncreasing(vector<int>&nums){
          int n = nums.size(); 
          for(int i = 1;i<n;i++){
              if(nums[i]<= nums[i-1])continue;
              else
              return false;
          }
          return 1;
    }
    bool isMonotonic(vector<int>& nums) {     
    //  return monotonicIncreasing(nums) || monotonicDecreasing(nums);
    
    int n = nums.size();
    bool I = true;
    bool D = true;
    
    for(int i = 1; i<n; i++){
    
    if(nums[i] >nums[i-1]){
        D = false;
    }
    else if(nums[i]<nums[i-1]){
        I = false;
    }

    if(!I && !D){
       return false;
    }
  }
     return I || D;
    }
};