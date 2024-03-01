class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {

      queue<TreeNode*>q;
      q.push(root);
       
      bool level = true;

      while(!q.empty()){
        int n = q.size();
        
        int prev; 

        if(level){
          prev = INT_MIN;
        }
        else{
            prev = INT_MAX;
        }
        while(n--){
            TreeNode*  curr = q.front();
            q.pop();
            
            if(level && (curr->val%2 == 0 || curr->val<=prev) ){
                return false;
            } 

            if(!level && (curr->val%2 != 0 || curr->val>= prev) ){
                return false;
            } 

            prev = curr->val;
            
            // Normal BFS 
            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
        }

        level = !level;
      }  
     return true;
    }
};