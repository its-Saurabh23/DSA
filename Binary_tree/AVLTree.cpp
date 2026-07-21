#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data,height;
    Node* left, *right;
    
    Node(int value){
         data = value;
         height = 1;
         left = right = NULL;

    }
};

int getHeight(Node* root){
    if(!root){
        return 0;
    }
    return root->height;
}

int getBalance(Node* root){
    if(!root){
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
}

//L L
Node* RightRotation(Node* root){
   Node* child = root->left;
   Node* childRight = child->right;

   child->right = root;
   root->left = childRight;
   //update height
   root->height = 1 + max(getHeight(root->left),getHeight(root->right));
   child->height = 1 + max(getHeight(child->left),getHeight(root->right));

   return child;
}

Node* LeftRotation(Node* root){
    Node* child = root->right;
    Node* childRight = child->left;

    child->left  = root;
    root->right = childRight;
    
    //update height
    root->height  = 1 + max(getHeight(root->left),getHeight(root->right));
    child->height = 1 + max(getHeight(root->left),getHeight(root->right));
    
    return child;
}

Node* Insert(Node* root,int key){
     if(!root){
        return new Node(key);
     }
    
     if(key<root->data){
        root->left = Insert(root->left,key);
     }else if(key>root->data){
        root->right = Insert(root->right,key);
     }else{
        return root;
     }
     // update height of the current node
     root->height = 1 + max(getHeight(root->left),getHeight(root->right));

     //Balacing check
     int balance = getBalance(root);

     // Left Left Rotation
     if(balance>1 && key<root->left->data){
         return RightRotation(root);
     }
     //Right Right Rotation
     if(balance<-1 && key>root->right->data){
       return LeftRotation(root);
     } 
     //Left Right Rotation
     if(balance>1 && key>root->left->data){
         root->left = LeftRotation(root->left);
          return RightRotation(root);
     }
     //Right left Rotation
     if(balance <-1 && key<root->right->data){
      root->right =  RightRotation(root->right);
       return LeftRotation(root);
     }
     else{
        return root;
     }
}


void preOrder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(Node* root){
      if(!root)return;

      InOrder(root->left);
      cout<<root->data<<" ";
      InOrder(root->right);
}

int main(){
    // No duplicate vlues are allowed in BST;
   Node* root = NULL;
   root = Insert(root,10);
   root = Insert(root,20);
   root = Insert(root,30);
   root = Insert(root,50);
   root = Insert(root,70);
   root = Insert(root,5);
   root = Insert(root,100);
   root = Insert(root,95);

   
   cout<<"PreOrder"<<endl;
   preOrder(root);
   cout<<"Inorder"<<endl;
   InOrder(root);

}
