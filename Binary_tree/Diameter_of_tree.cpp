#include<bits/stdc++.h>
using namespce std;

class{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int value){
    this->data =value;
    left = NULL;
    right = NULL;  
  }
};

class Solution{
   public:

    int ans = 0;
   int height(Node* root){
         
          //Base case 
          if(!root)return 0;

          int left = height(root->left);   // recursion hypothese
          int right = height(root->right);
          
          //Recursion induction 
          ans = max(ans,left+right);
          
          return 1 + max(left,right);
   }
   int diameter(Node* root){
       height(root);
       return ans;
   }
};


int main(){
    
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    
    Solution obj;
    int ans = height(root);
    std::cout<<ans<<endl;
    return 0;
}
