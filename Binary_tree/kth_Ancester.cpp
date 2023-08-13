/*
Node* solve(Node* root,int &k,int node){
    // base case
    
    if(root == NULL){
        return NULL;
    }
    // for finding node
    if(root->data == node){
        return root;
    }
    // recursive call
Node* leftAns = solve(root->left,k,node);
Node* rightAns = solve(root->right,k,node);

 if(leftAns != NULL && rightAns == NULL){
     k--;
     if(k<=0){
        //  edge case
        k = INT_MAX;
         return root;
     }
     return leftAns;
 }
 
 if(leftAns == NULL && rightAns != NULL ){
     k--;
     if(k<=0){
         k =INT_MAX;
        //  edge case
        return root;
     }
     return  rightAns;
 }
 return NULL;
    
}
int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root,k,node);
                     
                     // edge case          
    if(ans == NULL || ans->data == node){
        return -1;
    }
    else{
        return ans->data;
    }
}


*/