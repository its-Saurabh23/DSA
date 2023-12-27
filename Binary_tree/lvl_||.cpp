//  code is same just like level order traversal but at the end reverse the ans
// this a trick
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }

    queue<TreeNode*>q;
     q.push(root);

     while(!q.empty()){
        int n = q.size();
        vector<int>v;
        for(int i = 0; i<n;i++){
          TreeNode* front = q.front();
          q.pop();

          if(front->left != NULL){
              q.push(front->left);
          }
          if(front->right != NULL){
              q.push(front->right);
          }
          v.push_back(front->val);
        }
        ans.push_back(v);
     }    
    
    // Main part
     reverse(ans.begin(),ans.end());
     return ans;
 }
};