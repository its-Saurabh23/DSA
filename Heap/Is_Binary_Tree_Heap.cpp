/*
Logic 
1 check it is complete binary tree or not
(if the index is out of count node it is not a CBT)

2 check wether it is following the max order property or not
parent should be greater than its left and right child

*/


class Solution {
  public:
    int countNode(struct Node* root){
        
     // base case 
     if(root == NULL){
         return 0;
     }
     int cnt = 1 + countNode(root->left) + countNode(root->right);
     return cnt;
    }
    
    bool isCBT(struct Node* root,int index,int cnt){
        
        if(root == NULL){
            return true;
        }
        
        if(index>=cnt){
            return false;
        }
        
        else{
            bool left = isCBT(root->left,2*index+1,cnt);
            bool right = isCBT(root->right,2*index+2,cnt);
            return (left && right);
        }
        
        
    }
    bool Maxorder(struct Node* root){
        
        if(root->left == NULL && root->right == NULL){
            return true;
        }
        
        if(root->right == NULL){
            return (root->data > root->left->data);
        }
        else{
            bool left = Maxorder(root->left);
            bool right = Maxorder(root->right);
            
            
return(left && right && (root->data > root->left->data && root->data > root->right->data));            
        }
        
    }
    
    bool isHeap(struct Node* tree) {
     
     int count = countNode(tree);
      int index = 0;
      if(isCBT(tree,index,count) && Maxorder(tree)){
          return true;
      }
      else{
          return false;
      }
    }
};