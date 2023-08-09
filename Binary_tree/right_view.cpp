/*
class Solution
{
    private:
    void solve(Node* root,vector<int>&ans,int level){
        // base case 
        if(root==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
    }
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
      vector<int>ans;
      solve(root,ans,0);
      return ans;
    }
};

*/