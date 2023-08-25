/*
bool  solve(BinaryTreeNode<int> *root,int min ,int max){
      // base case
      if(root == NULL){
          return true;
      } 
      if(root->data >= min && root->data <= max){
          bool left = solve(root->left,min,root->data);
          bool right = solve(root->right,root->data,max);

          return left && right; 
      }
      else{
          return false;
      }

}
*/

// remever the case 
//   >=   ,<= 
// and remember the data type  int , long long int etc.