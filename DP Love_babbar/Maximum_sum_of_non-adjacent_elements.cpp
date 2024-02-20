// This Probleam is also known as House robbar- |(leetcode) 
// This Probleam is also known as stickler Theif |(GFG) 


// TLE Solution exponational time complexity
#include <bits/stdc++.h>

int solve(vector<int>&nums,int n){
    // base case
       if(n<0){
           return 0;
       }
       if(n == 0){
           return nums[0];
       }
    //    recursive call;
    int incl = solve(nums,n-2) + nums[n]; 
    int excl = solve(nums,n-1) + 0;

    return max(incl,excl);
}
int maximumNonAdjacentSum(vector<int> &nums){
     
    int n = nums.size();
    int ans = solve(nums,n-1);
     return ans;
}

// With memoisatoin

// Also giving TLE 

int solve2(vector<int>&nums,int n,vector<int>&dp){
    // base case
       if(n<0){
           return 0;
       }
       if(n == 0){
           return nums[0];
       }
     if(dp[n] != -1){
         return dp[n];
     }
        
    //    recursive call;
    int incl = solve(nums,n-2) + nums[n]; 
    int excl = solve(nums,n-1) + 0;
    
    dp[n] = max(incl,excl);

    return dp[n]; 
}
int maximumNonAdjacentSum(vector<int> &nums){
     
    // int n = nums.size();
    // int ans = solve(nums,n-1);
    //  return ans;

    int n = nums.size();
    // dp array
    vector<int>dp(n+1,-1);
    return solve2(nums,n-1,dp);
}




// Tabulation method.
// with some space 

int solve2(vector<int>&nums,int n,vector<int>&dp){
    // base case
       if(n<0){
           return 0;
       }
       if(n == 0){
           return nums[0];
       }
     if(dp[n] != -1){
         return dp[n];
     }
        
    //    recursive call;
    int incl = solve(nums,n-2) + nums[n]; 
    int excl = solve(nums,n-1) + 0;
    
    dp[n] = max(incl,excl);

    return dp[n]; 
}


// space optimasation  O(1) ,O(n);
int solve4(vector<int>&nums){
    // with space optimisation
    
    int n = nums.size();
    int pre2 = 0;
    int pre1 = nums[0];
    
    for(int i = 1; i<n; i++){
        int incl = pre2 + nums[i];
        int excl = pre1 + 0;
        int ans = max(incl,excl);

        pre2 = pre1;
        pre1 = ans;
    }

    return pre1;
}