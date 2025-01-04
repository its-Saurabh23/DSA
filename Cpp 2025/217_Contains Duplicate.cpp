class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i<n-1; i++){
            for(int j = 1; j<n; j++){
                if(i != j){
                  if(nums[i] == nums[j])return true;
                }
            }
        }
        return false;
    }
};