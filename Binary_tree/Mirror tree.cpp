#incude<bits/stdc++.h>
using namespace std;
 
class Node{
public:
   int data;
   int height;
   Node* lefr ;
   Node* right;

   Node(int value){
      this->data = value;
     this->height = 1;
     left = NULL;
     right= NULL;
   }
};

class Solution{
public:


// Mirror a tree and Invert a Tree;
void solve(Node*root){

  if(!root){
   return; 
  }
  solve(root->left);
  solve(root->rigt);
  swap(root->left,root->right);
  
 };
};

int main(){
  Node* root = NULL;
  Solution obj;
  obj.solve(root);

return 0;
}
