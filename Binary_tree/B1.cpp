#include <iostream>
#include <queue>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
};

void print(Node* root){

//DFS Pree oder printing 
// base case
if(root == nullptr){
    return ;
}

cout<<root->data<<endl;
print(root->left);
print(root->right);

}

Node* createTree(int data){
Node* newNode = new Node();
newNode->data = data;
newNode->left = newNode->right = nullptr;
}

int main(){

  // level 1 
  Node* root = createTree(1);
  root->left = createTree(2);
  root->right = createTree(3);
  // level 
  root->left->left = createTree(4);
  root->left->right = createTree(5); 
   print(root);
   cin.get();  
 return 0;

}
 /*
struct Node
{
    int data;
    Node* left;
    Node* right;
};

void printTree(Node* root){
    //base case 
    if(root == nullptr){
         return;
    }

    printTree(root->left);
    cout<<root->data<<endl;
    printTree(root->right);
}

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data =data;
    newNode->left = newNode->right = nullptr; 
}

int main(){

 //level 1 
Node* root = createNode(1);

//level 2
root->left = createNode(2);
root->right =createNode(3);

//level 3
root->left->left = createNode(4);
root->left->right =createNode(5);
root->right->left = createNode(6);
root->right->right =createNode(7);

// level 4
root->left->right->left = createNode(9);
root->right->right->left = createNode(15);

printTree(root);
cin.get();

class node
{
public:
    int data;
    int *left;
    int *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *bulidTree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left " << endl;

    root->left = bulidTree(root->left);
    cout << "Enter the data for inserting in right " << endl;
    root->right = (root->right);

    return root;
}

void levelorderTraqversal(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        node *temp = q.front();
        
        q.pop();

        if (temp = NULL)
        { // purana level complete ho chuka hia

            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
         cout << temp->data << " ";
            if (temp == NULL)
            { // old level is completd;
                cout << endl;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void inorder(node* root){

    //base case
    if(root == NULL){

        return ;
    }

    inorder(root->left);
    cout<<root->left<<" ";
    inorder(root->right); 
}

void preorder(node* root){

    // base case
    if(root == NULL){
     return ;
    }
   // print firt
     
 cout<<root->data<<" ";
 preorder(root->left);
 preorder(root->right);
}

void postoeder(node* root){
  //base case
  if(root == NULL){
    return;
  }
 postoeder(root->left);
 postoeder(root->right);
 cout<<root->data<<" ";

}

void bulidFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Emter data for root "<<endl;
    int data;
    cin>>data;
    root  = new root(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

         cout<<"Enter left node for: "<<temp->data<<endl;
         int leftData;
         if(leftData != -1){
           temp->left = new node(leftData);       
           q.push(temp->left);

         }
         cout<<"Enter right node for: "<<temp->data<<endl;
         int rightData;
         cin>>rightData;

         if(rightData !=-1){
           temp->right = new node(leftData);
           q.push(temp->data);
         }

    }
}
int main()
{
        node *root = NULL;
  /*
 
  cout<<"inorder travertsal output "<<endl;
  inorder(root);

  cout<<"preorder trraversal output "<<endl;
  preorder(root);
  
  cout<<"Postorder traversal output "<<endl;
  postoeder(root);
 

    // bulidTree
    root = bulidTree(root);
    // levelordertraversal
    levelorderTraqversal(root);
  

levelorderTraqversal(root);
  */

 #include<bits/stdc++.h>
 using namespace std;
 
//  Binary Tree;

 class Node{
     
     public:
     int data;
     Node* left;
     Node* right;
     
     Node(int d){
        data = d;
        left = NULL;
        right = NULL;
     }
 };
 

 void priOrderTraversal (Node* root){
     
     if(root == NULL ){
         return;
     }
     std::cout << root->data<<" ";
     priOrderTraversal(root->left);
     priOrderTraversal(root->right);
}


void  InorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}


void leveOrderTraversal(Node* root){
    if(root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    }
    
    std::queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        
        Node*temp = q.front();
        q.pop();
        
        cout<<temp->data <<" ";
        
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}

void zigZagTraversal(Node* root){
    
    if(root == NULL){
        std::cout << "Tree is emplty" << std::endl;
        return;
    }
    
    queue<Node*>q;
    bool leftToRight = true;
    
    q.push(root);
    
    while(!q.empty()){
    int size = q.size();
    std::vector<int>ans(size);  // level Wise

        for(int i = 0; i<size; i++){
            Node * temp = q.front();
            q.pop();

            int index; 
            if(leftToRight){
                index = i;
            }else{
                index = size-i-1;
            }
            ans[index] = temp->data;
            
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
        for(auto it :ans){
            cout<<it<<" ";
        }
        
        leftToRight = !leftToRight;
    }
    
}

 int main(){
     
     Node* root = new Node(10);
     
     root->left = new  Node(20);
     root->right = new Node(30);
     
     root->left->left = new Node(40);
     root->right->right = new Node(50);
     
     root->left->left->left = NULL;
     root->right->right->right = NULL;
     
    //  priOrderTraversal(root);
    //  InorderTraversal(root);
    // leveOrderTraversal(root);
    zigZagTraversal(root);
     
     return 0;
 }




------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  
  int data;
  Node* left;
  Node* right;
  
  Node(int val){
      data = val;
      left = NULL;
      right = NULL;
  }
};

class BinarySearchTree {
   public:
   Node* root;
   
   BinarySearchTree(){
       root = NULL;
   }
   
   
void BuildBinarySearchTree(int data){
   root = insert(root,data);
}

 Node * insert(Node* node,int data){
    
    if(node == NULL){
        return new Node(data);
    }
    
    if(data < node->data){
        node->left = insert(node->left,data);
    }
    else if(root->data<data){
        node->right = insert(node->right,data);
    }
    return node;
 } 
 
 void Inorder(){
    InorderHelper(root);
 }
 
 private:
 void InorderHelper(Node* node ){
     
     if(node == NULL){
         return;
     }
     InorderHelper(node->left);
     std::cout << node->data <<" ";
     InorderHelper(node->right);
  }
  
}; 


int main(){
    
    BinarySearchTree bst;
    bst.BuildBinarySearchTree(50);
    bst.BuildBinarySearchTree(30);
    bst.BuildBinarySearchTree(70);
    bst.BuildBinarySearchTree(20);
    bst.BuildBinarySearchTree(40);
    bst.BuildBinarySearchTree(60);
    bst.BuildBinarySearchTree(80);
    
    bst.Inorder();
    
    return 0;
}
