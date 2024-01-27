class Solution {
public:
    void solve(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        // base case
        if(ind == arr.size() ){
           if(target == 0){
            ans.push_back(ds);
           }
        return;
        }

        // pic up the element
        if(arr[ind]<= target){
            ds.push_back(arr[ind]);
            // recursive call  index will be same 
            solve(ind,target - arr[ind],arr,ans,ds);

            // backTrack(pop that inserted element) if we do not get the target 
                ds.pop_back(); 
        }

        // Not Pic element  index will be increase
        solve(ind + 1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;

        vector<int>ds;
        //  start with index 0   
        solve(0,target,candidates,ans,ds);
        return ans;
    }
};

// T.C = 2 pow(t) *k
// S.C = Number of combinations 