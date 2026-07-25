#include<bits/stdc++.h>
using namesoace std;
class Node{

  public:
  int data;
  Node* left;
  Node* right;

  //Constructure 
  Node(int value){
     value = data;
     left = right = NULL;
  }
};

Node* Insert(Node* root,int value){
    
    // base case 
    if(!root){
      Node* temp = new Node(value); 
    }

    if(value>root->data){
        root->right = Insert(root->right,value);
    }else{
        root->left = Insert(root->left,value);
    }
    return root;
}

void InorderTraversal(Node*root){   
    if(!root){
        return;
    }
    InorderTraversal(root->left);
    std::cout<<root->data;
    InorderTraversal(root->right);
}
bool search(Node* root,int target){
    if(!root){
        return 0;
    }
    if(root->data == target){
         return 1;
    }else if(root->data>target){
      return search(root->left,target);
    }else{
       return search(root->right,target);
    }
}


Node* deletion(Node* root,int target){
    // base condtion  
    if(!root){
        return nullptr;
      }

      if(root->data > target){
         return root->left = deletion(root->left,target);  
      }else if(root->data<target){
        return root->right = deletion(root->right,target);
      }else{
        // leaf Node
        if(!root->left && !root->right){
          delete root;
          return nullptr; 
        }
        
        // one chile exit
        else if(root->left && !root->right){
             Node* temp = root->left;
             delete root;
             return temp;
        }
        else if(!root->left && root->right){
            Node* temp = root-left;
            delete root;
            return temp;
        }

        //Both child exit
        else{

            Node* child = root->left;
            Node* parent = root;

            //Right most node
            while(child->right != NULL){
                parent = child;
                child = child->right;
            }
            if(root !=parent){
                parent->right = child->left;
                child->left = root->left;
                chuld->right = root->right;
                delete root;
                return child ;
            }else{
                child->right = root->right;
                delete root;
                return child;
            }
        } 

      }
}


int main(){
    Node* root = NULL;
    int arr[] = {8,4,3,6,11,13,12,5}
    for(int i =0;i<8;i++){
     root = Insert(root,arr[i]);
    }

    //Inorder Traversal 
    InorderTraversal(root);
    int target = 9;
    
    bool result = search(root,target)
     if(!result){
         std::cout<<"Not fount";
     }else{
        std::cout<<"Found ";
     }
}
