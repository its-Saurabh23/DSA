 /*
 class Solution
{
    public:
    
void inorder(Node* root, vector<int> &in){
    if(root==NULL){
        return ;
    }
    inorder(root->left,in);
    in.push_back(root->data);
     inorder(root->right,in);

}
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    vector<int> ans(bst1.size()+bst2.size());
    int i=0,j=0,k=0;
    while(i<bst1.size() && j<bst2.size()){

        if(bst1[i]<bst2[j]){
            ans[k++]=bst1[i++];
        }else{
            ans[k++]=bst2[j++];
        }
    }
    while(i<bst1.size() ){
            ans[k++]=bst1[i++];
    }
    while( j<bst2.size()){
        ans[k++]=bst2[j++];
    }

    return ans;
    }
};
 */


// logic 

// step 1 determine inorder of two BST's

// Merger them by first storing them into a vector 

// Now Create BST Form inorder
 