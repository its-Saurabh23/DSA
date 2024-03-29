// Recusion + Memomization 

class Solution {
public:
    int t[101];
    int solve(vector<int>&nums,int i,int n){
        // base case
        if(i>n){
            return 0;
        }
       // memo
       if(t[i] != -1){
           return t[i];
       }    
    int pick = nums[i] + solve(nums,i+2,n);
    int notpick = solve(nums,i+1,n);

    return t[i] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0],nums[1]);
        }
        memset(t,-1,sizeof(t));
       // if it take 0th index then we have to remove the last beacuse it circle
       int take_0 = solve(nums,0,n-2);

       memset(t,-1,sizeof(t));
       // if we don't take 0th index than so we can take last one
       int take_1 = solve(nums,1,n-1);
       
       return max(take_1,take_0);  
    }
};


// Buttom up 
class Solution {
public:
    int rob(vector<int>& nums) {
        // bottom up 

        int n = nums.size();

        if(n == 1){
        return nums[0];
        }

        vector<int>t(n+1,0);
        t[0] = 0;
        // Taking money from first house so we can skip the last house
        for(int i = 1; i<=n-1;i++){

            int skip = t[i-1];
            int take = nums[i-1] + ((i-2>= 0) ? t[i-2] :0);
            t[i] = max(skip,take);
        }
        int res1 = t[n-1];

        t.clear();
        t[0] = 0;
        t[1] = 0; // At this time we are skiping this stating house; 
        
        for(int i = 2; i<=n; i++){

            int skip = t[i-1];
            int take = nums[i-1] + ((i-2>= 0) ? t[i-2] :0);
            t[i] = max(skip,take);
        }
        int res2 = t[n];

        return max(res1,res2);
    }
};