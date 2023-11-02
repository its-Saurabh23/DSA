//logic apply Reverse InorderTraversal order 
/*
class Solution
{
    public:
    
    void InorderTraversal(struct Node* root,int &sum){
        // base case
        if(root == NULL){
            return;
        }
        // Reverse inorder
        
        InorderTraversal(root->right,sum);
        
        
        int currentSum = root->data;
        root->data =  sum;
        sum = sum + currentSum;
        
        InorderTraversal(root->left,sum);
        
    }
    void transformTree(struct Node *root)
    {
      int sum = 0;
      InorderTraversal(root,sum);
    }

    */