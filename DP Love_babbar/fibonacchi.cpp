// recusive appoarch 

int fib(int n){
        // base case
        if(n == 1 || n == 0){
                return n;
        }
        
        return fib(n-1) + fib(n-2);
}

// Top Down appoarch recusion + memoisation 
#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&dp){
        // base case
        if(n<=1){
                return n;
        }
        // step 3 
        if(dp[n] !=-1){
                return dp[n];
        }

        // step 2;
        dp[n] = fib(n-1,dp) + fib(n-2,dp);
        return dp[n];
}

int main()
{       
        int n;
        cin>>n;

        // step 1 create a dp Array
        vector<int>dp(n+1);
        for(int i = 0;i<=n;i++){
              dp[i] = -1;
        }

        // function call
        cout<<fib(n,dp)<<endl;
}

// T.C = O(n)
// S.c = dp array  O(n) +   o(n)// depth of the recursion