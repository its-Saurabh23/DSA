// o(n) apporach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>ans(n);

        int i = 0,j = n-1,k = n-1;
        while(k>=0){
         int square_i = nums[i] * nums[i];
         int square_j = nums[j] * nums[j];

         if(square_i>=square_j){
            ans[k] = square_i;
            i++;
         }
         else{
            ans[k] = square_j;
            j--;
         }
         k--;
        }

        return ans;
    }
};