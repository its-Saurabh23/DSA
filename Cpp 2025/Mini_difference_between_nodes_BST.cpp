/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getMin(TreeNode* root, int &ans,int &prev){

        if(!root)return;
      
        getMin(root->left,ans,prev);
        if(prev != -1){
            ans = min(ans,(root->val - prev));
        }
        prev = root->val;
        getMin(root->right,ans,prev);

    }

    int minDiffInBST(TreeNode* root) {
      int prev = -1;
      int ans = INT_MAX;
      getMin(root,ans,prev);

      return ans;
    }
};