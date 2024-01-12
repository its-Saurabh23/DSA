class Solution {
public:
    int solve(TreeNode* root, int maxi,int mini){
        // base case
        if(root == NULL){
            return maxi- mini;
        }
        // update the max and min at every level
        maxi = max(maxi,root->val);
        mini = min(mini,root->val);

        int left = solve(root->left,maxi,mini); 
        int right = solve(root->right,maxi,mini);

        return max(left,right);
    }
    int maxAncestorDiff(TreeNode* root) {
     
        return solve(root,root->val,root->val);
    }
};