/*
class Solution {
public:
     
    bool hasPathSum(TreeNode* root, int targetSum) {
      if(root==NULL) return false;
    

if(root->left == NULL && root->right == NULL && root->val - targetSum == 0){
      return true;
    }

    bool  left = hasPathSum(root->left,targetSum-root->val); 
    bool  right = hasPathSum(root->right,targetSum-root->val);

    return left || right;
    }
};

*/



// second Apporach will be 

/*
class Solution {

public:
bool  solve(TreeNode* root,int targetSum,int sum){
    if(root==NULL)return false;

    if(root->left == NULL && root->right == NULL){
      sum += root->val;
      if(sum == targetSum){
          return true;
      } 
    }
      return solve(root->left,targetSum,sum+root->val) || solve(root->right,targetSum,sum+root->val);
    
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        int sum = 0;
        return solve(root,targetSum,sum);
    }
};

*/