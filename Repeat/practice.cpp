
bool solve(Node* root,int target){
    if(!root){
        return 0;
    }

    int ans = root->data - target;

    if(root->left == NULL && root->right == NULL && ans == 0){// leaf and ans == 0 then its true;
        return true;
    }
    
    bool left = 0;
    bool right = 0
 
    if(root->left){
      left= solve(root->left,ans);
    }
    if(root->right){
     right = solve(root->right,ans);
    }
    return left || right;
}
