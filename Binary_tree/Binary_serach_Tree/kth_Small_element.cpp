
/* int solve(BinaryTreeNode<int>* root,int &i,int k){

    // base case 
    if(root == NULL){
       return -1;
    }
    int left = solve (root->left,i,k);
    
    if(left != -1){
        return left;
    }

    i++;
    if(i == k){
        return root->data;
    }

    return solve(root->right,i,k);

}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
    int ans = solve(root,i,k);
    return ans;
}*/

// first determine the preorder of the tree and then select the kth number 
// take a variable for counting anf checking that kth value..