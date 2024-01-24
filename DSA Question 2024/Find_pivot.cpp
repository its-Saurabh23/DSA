class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n = nums.size();
       int leftSum = 0;
        int sum = 0;
       for(int i=0;i<n;i++){
           sum = sum + nums [i];
       }

       for(int i = 0; i<n; i++){
          sum = sum - nums[i];

          if(sum == leftSum){
              return i;
          }
          leftSum += nums[i];
        }
        return -1;
    }
};

// sens kya h es question ka