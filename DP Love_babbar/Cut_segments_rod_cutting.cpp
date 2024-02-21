//  This will show TLE

#include<bits/stdc++.h>
int solve(int n,int x,int y,int z){

	// base case
	if(n == 0){
		return 0;
	}
	if(n<0)return INT_MIN;

	// recursive call
   int a = solve(n-x, x,y,z) +1;
   int b = solve(n-y, x,y,z) +1;
   int c = solve(n-z, x,y,z) +1;

   int ans = max(a,max(b,c));
    return ans;

}

int cutSegments(int n, int x, int y, int z) {
	int ans = solve(n,x,y,z);
	 if(ans<0){
     return 0;
	 }
	 else{
        return ans;
	 }
}

// With Memoiazation
int solve(int n,int x,int y,int z ,vector<int>& dp){
  
//   base case

if(n ==0)return 0;

if(n<0)return INT_MIN;

// step 3 check before the recusive call
if(dp[n] != -1) return dp[n];

int a = solve(n-x, x,y,z,dp) +1;
int b = solve(n-y, x,y,z,dp) +1;
int c = solve(n-z, x,y,z,dp) +1;

// step 1 sotore in dp
   dp[n] = max(a,max(b,c));

// return the dp ans; 
    return dp[n];
}