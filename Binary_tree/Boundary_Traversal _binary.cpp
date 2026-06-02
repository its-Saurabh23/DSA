#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    
    int data;
    Node*left;
    Node* right;
    
    Node(int d){
        data = d;
    };
};

void levelOrderTraversal(Node* root){
    if(root == NULL){
        std::cout << "Tree is Empty "<< std::endl;
        return;
    }
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        cout<<temp->data<<" ";
        
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void TopView(Node* root){
    
    if(root == NULL){
        cout<<"Tree is empty "<<" ";
        return;
    }
    
    queue<pair<Node*,int>>q;
    map<int,int>mp;
    
    q.push({root,0});
    
    while(!q.empty()){
        int size = q.size();
        
        for(int i = 0;i<size; i ++){
            auto it = q.front();
            q.pop();
            
            int HD = it.second;
            Node* temp = it.first;
            
             if(mp.find(HD) == mp.end()){
                mp[HD] = temp->data; 
             }
             
         if(temp->left != NULL){
            q.push({temp->left,HD-1});
            }
            
        if(temp->right != NULL){
            q.push({temp->right,HD +1});
          }
        }
       
    }
    
    for (pair<const int, int> it : mp) {
    cout << it.second << " ";
   }
}


void BottomView(Node* root){
    if(root == NULL){
        cout<<"Tree is empty "<<" ";
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    
    map<int,int>mp;
    
    while(!q.empty()){
        int size = q.size();
        
        for(int i =0; i<size; i++){
            auto it = q.front();
            q.pop();
            
            int HD = it.second;
            Node* temp = it.first;
            
            mp[HD] = temp->data;
            
            if(temp->left !=  NULL){
                q.push({temp->left,HD-1});
            }
            if(temp->right != NULL){
                q.push({temp->right,HD+1});
            }
            
        }
        
    }
        for(pair<const int,int>it:mp){
            cout<<it.second <<" ";
        }
}

void zigzagTraversal(Node*root){
    if(root == NULL){
        cout<<"Tree is empty ";
        return;
    }
    
    bool LeftToRight = true;
    queue<Node*>q; 
    
    q.push(root);
    
    while(!q.empty()){
    int size = q.size();
    vector<int>ans(size);
    
     for(int i =0;i<size; i++){
       
        int index;
        Node* temp = q.front();
        q.pop();
        
        if(LeftToRight){
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
     
     for(int it:ans){
        cout<<it <<" ";
     }
     LeftToRight = !LeftToRight;
    }
    
}


void printLeft(Node* root){
    if(root == NULL){
        cout<<"Tree is empty";
        return;
    }
    // Skip leaf node
    if(root->left == NULL && root->right == NULL){
        return;
    }
    
    if(root->left){
      printLeft(root->left);
    }else{
        printLeft(root->right);
    }
    cout<<root->data<<" ";
}

void printRight(Node* root){
    if(root == NULL){
        return;
    }
    // Skip leaf node
    if(root->left == NULL && root->right == NULL){
        return;
    }
    
    if(root->right){
      printRight(root->right);
    }else{
        printRight(root->left);
    }
    cout<<root->data;
}

void printLeaf(Node* root){
    if(root == NULL){
        return;
    }
    
    if(root->left == NULL && root->right == NULL){
        cout<<root->data <<" ";
    }
    printLeaf(root->left);
    printLeaf(root->right);
}


void boundryTraversal(Node* root){
    if(root == NULL){
       cout<<"Tree is empty";
       return;
    }
    
    // Print head first 
    cout<<root->data<<" ";
    
    // Left Traversal 
    printLeft(root->left);
    printLeaf(root->left);    // left side leaf print;
    printLeaf(root->right);
    
    printRight(root->right);
}

void leftView(Node* root){
    if(root == NULL){
        cout<<"tree is empty ";
        return;
    }
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        
        for(int i = 0; i<size; i++){
            Node* temp = q.front();
            q.pop();
            
            if(i == 0){
                cout<<temp->data<<" ";
            }
            
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

int heightOfBinaryTree(Node* root){
    
    if(root == NULL){
        return 0;
    }

    return 1 + max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right) );
}


int main(){
     Node* root = new Node(99);
     root->left = new Node(100);
     root->right = new Node(110);
    
    root->left->left = new Node(101);
    root->left->right = new Node(102);
    
    root->right->right = new Node(111);
    root->right->left = new Node(123);
    // levelOrderTraversal(root);
    // TopView(root);
    // BottomView(root);
    // zigzagTraversal(root);
    // boundryTraversal(root);
    // int ans = heightOfBinaryTree(root);
    // cout<<"Height of binary tree "<<ans;
    // leftView(root);
    
    return 0;
}
