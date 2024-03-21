class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {

     vector<int>ans;
     map<int,vector<int>> mp;

    //   traversal of matrix for inseting in map
    for(int i = 0; i<nums.size(); i++){
     for(int j = 0;j<nums[i].size(); j++){       
       mp[i + j].push_back(nums[i][j]);
      }
    }
   
    // Traverse ma;
    for(auto &it : mp){
       reverse(it.second.begin(),it.second.end());
     // push into ans vector
     for(auto &num : it.second){
       ans.push_back(num);
      } 
    }
    return ans;
    }
};