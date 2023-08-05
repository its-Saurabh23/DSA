/*
class Solution {
    private:
    void TraversalLeft(Node* root,vector<int> &ans){
        //base case
        if((root==NULL) ||( root->left == NULL &&root->right == NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
        TraversalLeft(root->left,ans);
        }
        else{
              TraversalLeft(root->right,ans);
        }
    }
    void TraverseLeaf(Node* root , vector<int>&ans){
        //base case 
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL) 
          ans.push_back(root->data);
          
        TraverseLeaf(root->left,ans);
        
        TraverseLeaf(root->right,ans);
        
    }  
    void TraverseRight(Node* root,vector<int>&ans){
        //base case
        if((root == NULL) ||(root->left == NULL && root->right == NULL)){
            return;
        }
        if(root->right){
            TraverseRight(root->right,ans);
        }
        else{    
        TraverseRight(root->left,ans);
        }
        
        //strore ans
        ans.push_back(root->data);
    }
public:
    vector <int> boundary(Node *root)
    {
       
       vector<int>ans;
       
        //base case
        if(root == NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        //traversal for left part
        TraversalLeft(root->left,ans);
        
        // traverse leaf
        
        //left subtree
        TraverseLeaf(root->left,ans);
        
        //right subtree
        TraverseLeaf(root->right,ans);
        
        
        //traverse RightPart
        
        TraverseRight(root->right,ans);
        return ans;
        
    }
};
*/