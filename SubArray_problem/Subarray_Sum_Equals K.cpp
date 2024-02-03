class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        int cnt = 0;
        unordered_map<int,int>preSum;
        int sum = 0;         

        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(sum == k){
                cnt++;
            }

            if(preSum.find(sum-k) != preSum.end()){
                cnt += preSum[sum - k];
            }
            preSum[sum]++;

        }
        return cnt;

    }
};