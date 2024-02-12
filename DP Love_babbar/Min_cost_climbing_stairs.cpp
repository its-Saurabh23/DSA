// This will give TLE 

// Because we are not solving the overlappingsub problem

class Solution {
public:

    int solve(vector<int>&cost,int n){
        // base case 
        if(n == 0)return cost[0];
        if(n == 1)return cost[1];

        int ans = cost[n] + min(solve(cost,n-1), solve(cost,n-2));
        return ans;        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();

        int ans = min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
};

// DP + Memoaization  This include exta space.
class Solution {
public:
    int solve(vector<int>&cost,int n,vector<int>&dp){

        // base case is same
        if(n == 0)return cost[0];
        if(n == 1)return cost[1];

    //  step 3 check that if the ans is already stored in dp array or not
       if(dp[n] != -1)return dp[n];


        // step 2 
        //save the overlapping sub problem
        dp[n] = cost[n] + min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

      // step 1 create a dp array
        vector<int>dp(n+1,-1);
        int ans = min(solve(cost,n-1,dp), solve(cost,n-2,dp) );
        return ans;
    }
};