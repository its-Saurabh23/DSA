// T.C = O(n)
// S.C = o(Height);   But can be optimize


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

        // Use this vaiable;
        TreeNode* lastNode = NULL;
        while(!q.empty()){
            TreeNode* curr = q.front();
            lastNode = curr;
            q.pop();

            if(curr->right != NULL){
                q.push(curr->right);
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
        }
        return lastNode->val;
    }
    int findBottomLeftValue(TreeNode* root) {
        return solve(root);
    }
};