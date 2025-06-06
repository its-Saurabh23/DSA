class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftProduct(n,1);
        vector<int>rightProduct(n,1);

        for(int i = 1; i<n; i++){
           leftProduct[i] = nums[i-1]*leftProduct[i-1]; 
        }

        for(int i = n-2; i>=0; i--){
            rightProduct[i] = rightProduct[i+1]*nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0; i<n;i++){
          ans[i] = leftProduct[i]*rightProduct[i];
        }
        return ans;
    }
};