
/*
BinaryTreeNode<int>* solve(vector<int> &preorder,int mini,int maxi,int &i){
// base condition 
  if(i>=preorder.size()){
      return NULL;
  }

  //right ke liye condition
  if(preorder[i] < mini || preorder[i]> maxi){
    return NULL;
  }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);

     //left call
      root->left = solve(preorder,mini,root->data,i);

     //right call
     root->right = solve(preorder,root->data,maxi,i);
     return root;

}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {

 int mini = INT_MIN;
 int maxi = INT_MAX;   
 int i = 0;

  return solve(preorder,mini,maxi,i);

}

*/

// logic  compare evey node with min and max value of the above root values
// top node lies in between INT_MIN or INT_MAX value 
// than left part lies INT_MIN and root->value;
// remember the conditon  if(preorder[i] < mini || preorder[i]> maxi)