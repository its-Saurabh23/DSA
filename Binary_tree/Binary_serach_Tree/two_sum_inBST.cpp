
/*
void inoder(BinaryTreeNode<int>*root,vector<int> &in){
    // base case
    if(root == NULL){
        return;
    }
    // left call
    inoder(root->left,in);
    // prcessing 
    in.push_back(root->data);
    
    // right call

    inoder(root->right,in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	 
   vector<int>v;
   inoder(root,v);
   
//    tow pointer apporach
  int i = 0,j = v.size()-1;

  while(i<j){
  int sum = v[i]+v[j];

  if(sum == target){
      return true;
  }
  else if(sum> target){
      j--;
  }
  else{
      i++;
  }
      
  }
  return false;
}

*/