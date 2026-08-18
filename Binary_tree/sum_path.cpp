/*
class Solution {
public:
     
    bool hasPathSum(TreeNode* root, int targetSum) {
      if(root==NULL) return false;
    

if(root->left == NULL && root->right == NULL && root->val - targetSum == 0){
      return true;
    }

    bool  left = hasPathSum(root->left,targetSum-root->val); 
    bool  right = hasPathSum(root->right,targetSum-root->val);

    return left || right;
    }
};

*/



// second Apporach will be 

/*
class Solution {

public:
bool  solve(TreeNode* root,int targetSum,int sum){
    if(root==NULL)return false;

    if(root->left == NULL && root->right == NULL){
      sum += root->val;
      if(sum == targetSum){
          return true;
      } 
    }
      return solve(root->left,targetSum,sum+root->val) || solve(root->right,targetSum,sum+root->val);
    
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        int sum = 0;
        return solve(root,targetSum,sum);
    }
};

*/

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    int height;
    Node* left;
    Node* right;
    
    Node(int value){
       this->data = value;
       this->height = 1;
       left = NULL;
       right = NULL; 
    }
};


class Solution{
    public:
    bool solve(Node* root,int target){
        if(!root){
            return 0;
        }

        int subSum = root->data - target;   // two sum problem statement logic 
        
        if(root->left == NULL && root->right == NULL && sum == 0 ){
            return true;
        }
        bool left = 0; bool right = 0;
        
        if(root->left){
            left = solve(root->left,subSum);
        }
        if(root->right){
            right = solve(root->right,subSum);
        }
        return left || right;
    }

};

int mian(){
   Node* root = new Node(1);
   
   Solution Obj;
   obj.solve(root,10);
    return 0;
}
