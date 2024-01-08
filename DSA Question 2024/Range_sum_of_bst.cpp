class Solution {
public:
    int solve(TreeNode* root,int low,int high){
        // base case
        if(root == NULL){
            return 0;
        }
        
     int left = solve(root->left,low,high);
     int right = solve(root->right,low,high);

        if(root->val >= low && root->val<= high){
            return root->val + left + right;
        }
     
        return  left+ right;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
 
        int ans =  solve(root, low,high);
        return ans;

    }
};