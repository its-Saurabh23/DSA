class Solution {
public:
    int solve(TreeNode* root,vector<int>&v){
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr = q.front();
            v.push_back(curr->val);
            q.pop();

            // Right to left process
            if(curr->right != NULL){
                q.push(curr->right);
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
        }
        return v[v.size()-1];
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int>v;
        return solve(root,v);
    }
};