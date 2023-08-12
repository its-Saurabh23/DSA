/* 
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       // base case
       if(root == NULL){
           return NULL;
       }
    //   for macthing n1, n2
       if(root->data == n1 || root->data == n2){
           return root;
       }
       //Recursive call
    Node* leftAns = lca(root->left,n1,n2);
    Node* rightAns = lca(root->right,n1,n2);
       
    //   1 case
       if(leftAns != NULL && rightAns != NULL){
           return root;
       }
       
    //   2 case
    else if(leftAns !=NULL && rightAns == NULL){
          return leftAns;
    }
    else if( leftAns == NULL && rightAns !=NULL){
        rightAns;
    }
    else{
        return NULL;
    }
    }
};
*/