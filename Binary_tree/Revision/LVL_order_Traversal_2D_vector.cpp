lass Solution {
public:

    void levelOrderTraversal(TreeNode* root,vector<vector<int>> &ans){
        queue<pair<TreeNode*,int>>q;
        int l = 0;
        q.push({root,l});
        while(!q.empty()){

            pair<TreeNode*,int> temp = q.front();
            q.pop();
             if(temp.second>=ans.size()){
                 ans.push_back({temp.first->val});
             }
             else{
                 ans[temp.second].push_back(temp.first->val);
             }
             l = temp.second + 1;

            if(temp.first->left){
                q.push({temp.first->left,l});
            } 
            if(temp.first->right){
                q.push({temp.first->right,l});
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        levelOrderTraversal(root,ans);
        return ans;
    }
};