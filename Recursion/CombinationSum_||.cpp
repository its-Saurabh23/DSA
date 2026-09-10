class Solution {
public:
    vector<vector<int>>ans;
    
    void solve(vector<int>&candidates,int start, int target,vector<int>&curr){
        if(target == 0){
            ans.push_back(curr);
            return;
        }

        for(int i = start; i<candidates.size(); i++){
            
            if(candidates[i] > target) break;

            if(i>start && candidates[i] == candidates[i-1]){
                continue;
            }
            curr.push_back(candidates[i]);
            solve(candidates,i+1,target-candidates[i],curr);
            curr.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        solve(candidates,0,target,curr);
        return ans;    
    }
};
