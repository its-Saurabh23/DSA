// appy the logic of height of a binary tree
/*
class Solution {
public:
    int solve(TreeNode* root){
        // base csae
        if(root == NULL){
            return 0;
        }
        int L = solve(root->left);
        if(L ==-1)return -1;

        int R = solve(root->right);
        if(R == -1)return -1;

        if(abs(L-R)>1)return -1;

        return max(L,R) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return solve(root) != -1;
    }
}; 

*/