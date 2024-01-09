class Solution {
public:
    void solve(TreeNode* root,vector<int>&ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->val);
        }
        solve(root->left,ans);
        solve(root->right,ans);
    }


    
    // void solve2(TreeNode* root2,vector<int>&ans){
    //     if(root2 == NULL){
    //         return;
    //     }
    //     if(root2->left == NULL && root2->right == NULL){
    //         ans.push_back(root2->val);
    //     }
    //     solve2(root2->left,ans);
    //     solve2(root2->right,ans);
    // }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        solve(root1,v1);
        solve(root2,v2);

        if(v1==v2)return true;
        else return false;

        
        // int n1 = v1.size();
        // int n2 = v2.size();
        // if(n1>=n2){
        //   for(int i = 0; i<n1;i++){
        //     if(v1[i] == v2[i]){
        //         continue;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // }
        // else{
        //      for(int i = 0; i<n2;i++){
        //     if(v1[i] == v2[i]){
        //         continue;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // }
       
        // return true;
    }
};