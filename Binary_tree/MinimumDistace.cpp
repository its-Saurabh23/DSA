#include<bits/stdc++.h>
using namespace std;

class Node{

  public:
   int data;
   Node* left;
   NOde* right;

   Node(int val){
      data = val;
      left = right = NULL;
   }
};

void minimumDistance(Node* root, int &ans,int & prev){   // pass by refernce means original thing I goging to be chagned.

  if(!root){
    return;
  }
  
  // Left call
  minimumDistance(root->left,ans,prev);
  
  if(prev != INT_MIN){  // for integer overflow.
     ans = max(ans,root->data-prev);
  }
  // update prev
  prev = root->data;
  
  minimumDistance(root->right,ans,prev);
}

int main(){
    Node* root = NULL: 
    int prev = INT_MAX;
    int ans = INT_MAX;

    minimumDistance(root,ans,prev);
  return 0;
}
