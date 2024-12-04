#include<bits/stdc++.h>
using namespace std;

class BinaryTree{
  public:
  
  int data;
  BinaryTree *left;
  BinaryTree *right;
  
  BinaryTree(int val){
    data = val;
    left = nullptr;
    right = nullptr; 
  }
  
};

BinaryTree* createLeverOrder(BinaryTree *root,int val){
  
  if(root == nullptr){
    return new BinaryTree(val);
    
  }
  
  queue<BinaryTree*>q;
  q.push(root);
  
  while(!q.empty()){
    
    BinaryTree *temp = q.front();
    q.pop();
    
    if(temp->left == nullptr){
      temp->left = new BinaryTree(val);    // creation of left part of tree
      return root;
    }
    else{
      q.push(temp->left);
    }
    
    
    if(temp->right == nullptr){
      temp->right = new BinaryTree(val);   // creation of right part of tree
      return root;
    }
    else{
      q.push(temp->right);
    }
  }
  return root;  
  
}

void levelOrderTraversal(BinaryTree *root){
 
 if(root == nullptr){
   std::cout << "Tree is empty" << std::endl;
   return;
 } 
 
 queue<BinaryTree*>q;
 q.push(root);
 
 while(!q.empty()){
   BinaryTree *temp = q.front();
   q.pop();
   
   cout<<temp->data<<" ";
   
   if(temp->left){
     q.push(temp->left);
   }
   
   if(temp->right){
     q.push(temp->right);
   }
   cout<<endl;
 }
}

void preOrderTraversal(BinaryTree* root){
  
  if(root == nullptr){
    return;
  }
  
  cout<<root->data<<" ";
  
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
  
}

void inOrderTraversal(BinaryTree* root){
  
  if(root == nullptr){
    return;
  }
   inOrderTraversal(root->left);
   cout<<root->data<<" ";
   inOrderTraversal(root->right);
}

void postOrderTraversal(BinaryTree* root){
  
  if(root == nullptr){
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout<<root->data<<" ";
}

void preOrderTraversalItrativeWay(BinaryTree * root){
  
  if(root == nullptr){
    cout<<"Tree is empty";
    return;
  }
  
  stack<BinaryTree*>st; 
   st.push(root);
   
   while(!st.empty()){
     
     BinaryTree *temp = st.top();
     st.pop();
     
     cout<<temp->data<<" ";
     
     // if I push left into the stack i will get right in the begining 
     if(temp->right){
       st.push(temp->right);
     }
     
       // if I push right into the stak i will get left in the begining
     if(temp->left){
       st.push(temp->left);
     }
   }
}

void postOrderTraversalItrativeWay(BinaryTree * root){
  
  if(root == nullptr){
    cout<<"Tree is empty";
    return;
  }
  
  //Two stack one for traversal one for store..
  
  stack<BinaryTree*>s1,s2;
  s1.push(root);
  
  while(!s1.empty()){   
    
    BinaryTree *temp = s1.top();
    s1.pop();
    // push into s2
    s2.push(temp);
    
    if(temp->left){
      s1.push(temp->left);
    }
    if(temp->right){
      s1.push(temp->right);
    }
  }
  
  while(!s2.empty()){
    cout<<s2.top()->data<<" ";
    s2.pop();
  }
}

void inOrderTraversalItrativeWay(BinaryTree *root){
  
  if(root == nullptr){
    cout<<"Tree is empty ";
    return;
  }
  
  stack<BinaryTree*>s;
  BinaryTree* current = root;
  
  while(!s.empty() || current != nullptr){
    
    // left travsersal till depth 
    while(current != nullptr){
       s.push(current);
       current = current->left;
    }
    
    current = s.top();
    s.pop();
    cout<<current->data <<" ";
    
    // right Traversal 
    current = current->right;
    
  }
  
}


void morriesInOrderTraversal(BinaryTree *root){
      if(root == nullptr){
        cout<<"Tree is empty";
        return;
      }

    BinaryTree *temp = root;

    while(temp != NULL){
    
       if(temp->left == NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
       }else{
        //finding predecessor node
       BinaryTree *pred = temp->left;
       while (pred->right != NULL && pred->right != temp)
       {
        pred = pred->right;
       }

       if(pred->right == NULL){
          pred->right = temp;    // link
          temp = temp->left; 
       }else{
          pred->right = NULL;  // unlink
          cout<<temp->data<<" ";
          temp = temp->right;
       } 
       }
    }  

}

int main(){
   
  BinaryTree *root = nullptr;

  root = createLeverOrder(root,10);
  root = createLeverOrder(root,20);
  root = createLeverOrder(root,30);
  root = createLeverOrder(root,40);
   
  // levelOrderTraversal(root);
  // preOrderTraversal(root);
  // inOrderTraversal(root);
  // postOrderTraversal(root);
  
  // preOrderTraversalItrativeWay(root);
  // postOrderTraversalItrativeWay(root);
  // inOrderTraversalItrativeWay(root);
  // morriesInOrderTraversal(root);
  return 0;
}