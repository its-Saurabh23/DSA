/*
void inorder(TreeNode<int>* root,vector<int> &in){

    // base case
    if(root == NULL){
        return;
    }
    // left call
    inorder(root->left,in);
    // processing
    in.push_back(root->data);
    // right call
    inorder(root->right,in);

}

TreeNode<int>* flatten(TreeNode<int>* root)
{ 
      vector<int>v;

      inorder(root,v);
      int n = v.size();
      TreeNode<int>* newNode  = new TreeNode<int>(v[0]);
      
      TreeNode<int>* curr = newNode;
      
  
    //   making left as NULL;
      for(int i = 1; i<n; i++){
        TreeNode<int>* temp = new TreeNode<int>(v[i]);

        curr->left = NULL;
        curr->right = temp;
        curr = temp;
      }

 
    //   last case when both left and right become NULL
      curr ->left = NULL;
      curr->right = NULL;

      return newNode;

}
*/

//  logic appy BST Property  that i Inorder of BST in Sorted.. 