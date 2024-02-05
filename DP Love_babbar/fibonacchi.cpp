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



// Tabulation method.  But need the space optimization.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n ;
    cin>>n;

    // step 1
    vector<int>dp(n + 1);
   
   // step 2
    dp[1] = 1;
    dp[0] = 0;

    // stpe 3 

    for(int i = 2; i<=n; i++){
      
      dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n]<<endl;


}





// space optimaization
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n ;
    cin>>n;

    // step 1
    // vector<int>dp(n + 1);
   
   // step 2
    // dp[1] = 1;
    int prev1 = 1;
    // dp[0] = 0;
    int  prev2 = 0;

    // stpe 3 

    for(int i = 2; i<=n; i++){
      
      // dp[i] = dp[i-1] + dp[i-2];

       int curr = prev1 + prev2;
       // shift logic
         prev2 = prev1;
         prev1 = curr;
    }
    // cout<<dp[n]<<endl;
    cout<<prev1<<endl;
    return 0;

}

// T.C =  O(n)
// S.C = O(1)