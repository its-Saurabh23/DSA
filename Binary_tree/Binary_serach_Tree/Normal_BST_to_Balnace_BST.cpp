/*
void inorder(TreeNode<int>* root,vector<int>&v){

    // base case
    if(root == NULL){
        return ;
    }

    // left call
    inorder(root->left,v);
    // processing
    v.push_back(root->data);
    // right call
    inorder(root->right,v);

}

TreeNode<int>* inorderToBST(int s,int e,vector<int>&v){

    // base case;
    if(s>e){
        return NULL;
    }

   int mid = (s+e)/2;
   TreeNode<int>* root = new TreeNode<int>(v[mid]);
   //    left call
   root->left = inorderToBST(s,mid-1,v);
   //    right call
   root->right = inorderToBST(mid+1,e,v);
   
   return root;

}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
     vector<int> v;
    //  inorder store
     inorder(root,v);

     return inorderToBST(0,v.size()-1,v);

}
*/

// property of BST. inorder of BST is  sorted 
//  make inorder of BST then make BST 