class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         
        if(nums.empty()){
            return 0;
        }
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int currentCount = 1;
        int longCount = 1;
        
        
        for(int i = 1; i<n; i++){
            if(nums[i] != nums[i - 1]){
                if(nums[i] == nums[i-1]+1){
                    currentCount += 1;
                }else{
                    longCount = max(currentCount,longCount);
                    currentCount = 1;
                }
            }
        }
        return max(longCount,currentCount);
    }
};