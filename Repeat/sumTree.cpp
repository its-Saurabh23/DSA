 
/*
class Solution
{
    private:
     //step 1
    pair<bool,int> isSumfast(Node* root){
    
    //base case
    if(root == NULL){
        pair<bool,int>p = make_pair(true,0);
        return p;
    }
    //base case for leaf 
    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }
    
    //step 2 checking both left and right subtree
    
    pair<bool,int> leftAns = isSumfast(root->left);
    pair<bool,int> rightAns = isSumfast(root->right);
    
    bool  left = leftAns.first;
    bool  right = rightAns.first;
    
    int condition = root->data == leftAns.second +rightAns.second;
        
        pair<bool,int>ans;
        
        if(left && right && condition){
            ans.first = true;
            ans.second = 2*root->data;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    
    public:
    bool isSumTree(Node* root)
    {
          return isSumfast(root).first;
    }
};

*/