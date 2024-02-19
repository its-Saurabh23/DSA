class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {       
        int n = nums.size();
        int prefix = 1;
        vector<int>ans(n,1);

//left to right Traversal  
        for(int i =0; i<n;i++){
        ans[i] = prefix;
        prefix = prefix*nums[i];
        }

// right to left taversal 
       int postfix = 1;
        for(int i = n-1;i>= 0; i--){
         ans[i] = ans[i]* postfix;
         postfix = postfix * nums[i];
        }
        return ans;
    }
};
