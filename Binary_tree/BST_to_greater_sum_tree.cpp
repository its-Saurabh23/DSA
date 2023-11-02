/*
class Solution
{
    public:
    
    void reversePreorder(struct Node* root,int &sum){
        // base case
        if(root == NULL){
            return;
        }
        // Reverse inorder
        
        reversePreorder(root->right,sum);
        
        
        int currentSum = root->data;
        root->data =  sum;
        sum = sum + currentSum;
        
        reversePreorder(root->left,sum);
        
    }
    void transformTree(struct Node *root)
    {
      int sum = 0;
      reversePreorder(root,sum);
    }

    */