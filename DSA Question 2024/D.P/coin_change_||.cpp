// Recusion
class Solution {
public:
    int n;
    int solve(int i,int amount,vector<int>&coins){
        // bae case
        if(amount == 0)return 1;  // one way fount
        if(i == n) return 0; // i excceds no way fount
        
        if(coins[i]>amount){
            return solve(i+1,amount,coins);
        }
        int take = solve(i,amount-coins[i],coins);
        int skip = solve(i+1,amount,coins);

        return take + skip;
    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();
        return solve(0,amount,coins);
    }
};


// Memoization 

class Solution {
public:
    int n;
    int t[3001][5001];

    int solve(int i,int amount,vector<int>&coins){
        // bae case
        if(amount == 0)return 1;  // one way fount
        if(i == n) return 0; // i excceds no way fount
        
          if(t[i][amount] != -1){
            return t[i][amount];
        }

        if(coins[i]>amount){
            return t[i][amount] = solve(i+1,amount,coins);
        }

        int take = solve(i,amount-coins[i],coins);
        int skip = solve(i+1,amount,coins);

        return t[i][amount] = take + skip;
    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();
        memset(t,-1,sizeof(t));

        return  solve(0,amount,coins);
    }
};