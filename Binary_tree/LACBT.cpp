#include<bits/stdc++.h>
using namespace std;

struct Node{
      public:
      int data;
      int height;
      Node* left;
      Node* right;

      Node(int val){
        this->data  = val;
        this->height = 1;
      }
};

class Solution{
   public:
    Node* LCAST(Node* root, int p, int q){
          
        if(!root){
            return nullptr;
        }

        if(root->data  == p && root->data  == q ){
            return root;
        }
        
        Node* left = LCAST(root->left, p, q);
        Node* right = LCAST(root->right, p, q);

        if(root&&root){
            return root;
        }
          
        return left ? left : right;
    }
};


int main(){
     Node* root = new Node(10);
     root->left = new Node(20);
     root->right = new Node(30);

     root->left->left = new Node(40);
     root->left->right = new Node(50);

     root->right->left = new Node(60);
     root->right->right = new Node(70);

    Solution obj;

    Node* lac  =obj.LCAST(root, 40, 50);
    std::cout<<lac->data <<endl;
}
