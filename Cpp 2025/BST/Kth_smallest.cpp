class Solution {
public:
    void kthSmallestUtil(TreeNode* root, int &ans, int &k){
       if(!root || k == 0)return;
       kthSmallestUtil(root->left,ans,k);

       if(k >0 ){
         ans = root->val;
         k--;  
       }
       kthSmallestUtil(root->right,ans,k);
    } 

    int kthSmallest(TreeNode* root, int k) {
       int ans;
       kthSmallestUtil(root,ans,k);
       return ans;
    }
};