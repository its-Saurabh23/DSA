class Solution {
public:
    void twoSum(vector<int>&nums,int start,int end,int target,vector<vector<int>>&result){
       
       while(start<end){

       int sum  = nums[start] + nums[end];
       
       if(sum>target){
          end--;
       }else if(sum <target){
            start++;
       }else{
            result.push_back({-target,nums[start],nums[end]});
            
            while(start <end && nums[start] == nums[start+1])start++;
            while(start <end && nums[end] == nums[end-1])end--;

            start++;
            end--;  
       }
     }
    }
    

    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();
      if(n<3){
        return{};
      } 

      vector<vector<int>>result;
      sort(nums.begin(),nums.end());

      for(int i = 0;i<n-2; i++){
           if(i >0 && nums[i] == nums[i-1]){
            continue;
           }
           int target = -nums[i];
           twoSum(nums, i+1,n-1,target,result);
      }
      return result;
    } 
};
