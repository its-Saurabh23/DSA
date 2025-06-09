#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};


Node* insert(Node* root,int target){
    
    if(root == NULL){
        root = new Node(target);
        return root;
    }
    else if(target < root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right = insert(root->right,target);
    }
    return root;
}

void InorderTraversal(Node* root,vector<int>&ans){
    
    if(root == NULL){
        return;
    }
    InorderTraversal(root->left,ans);
    ans.push_back(root->data);
    InorderTraversal(root->right,ans);
}

bool SeachInBST(Node* root,int target){
    
    if(root == NULL){
        return false;
    }
    
    if(root->data == target){
        return true;
    }else if(target<root->data){
        return SeachInBST(root->left,target);
    }else{
        return SeachInBST(root->right,target);
    }
}

 Node* getMin(Node* root){
     
     while(root && root->left != NULL){
         root = root->left;
     }
     return root;
 }

Node* deleteInBST(Node* root,int target){   
     
    if(root == NULL){
        return NULL;
    }
    else if(target < root->data){
        root->left = deleteInBST(root->left,target);    
    }else if(target > root->data){
        root->right = deleteInBST(root->right,target); 
    }else{
          
          // NO child
          if(root->left == NULL && root->right == NULL){
              delete root;
              return NULL;
          }
          
          // one child
          else if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
          }else if(root->right == NULL && root->left != NULL){
              Node* temp = root->left;
              delete root;
              return temp;
          }else{
              
              // two Child
            Node* temp = getMin(root->right);  
            root->data = temp->data;
            root->right = deleteInBST(root->right,temp->data);
          }
    }
      return root;
}


int HeightOFBST(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(HeightOFBST(root->left),HeightOFBST(root->right)) + 1;
}


void LevelOrderTraversal(Node* root){
    
    if(root == NULL) return;
    
    std::queue<Node*>q;
    
    q.push(root);
    
    while(!q.empty()){
        
        Node* curr = q.front();
        q.pop();
        
        cout<<curr->data<<" ";
        
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
        
    }
}

bool checkBST(Node* root,int &prev){
    if(root == NULL){
        return true;
    }
    
    if(!checkBST(root->left,prev)) return false;
    
    if(prev > root->data)return false;
     
     prev = root->data;
     
  return checkBST(root->right,prev);
}

 

//     if (!checkBST(root->left, prev)) {
//         return false;
//     }

//     if (root->data <= prev) {
//         return false;
//     }

//     prev = root->data;

//     return checkBST(root->right, prev);
// }

void ArrayToBST(vector<int>&ans,int left,int right,vector<int>&sol){
     
     if(left> right){
         return;
     }
     
     int mid = (left + right)/2;
     sol.push_back(ans[mid]);
     
     ArrayToBST(ans,left,mid-1,sol);
     ArrayToBST(ans,mid+1,right,sol);
}

int main(){
    Node* root = NULL;
    vector<int>arr ={8,10,6,3,1,4};
    
    for(int i = 0; i<arr.size(); i++){
       root = insert(root,arr[i]);
    }

    vector<int>ans;
    InorderTraversal(root,ans);
    
    // cout<<"Inorder Traversal in BST"<<endl;
    // for(int i = 0; i<ans.size(); i++){
    //     std::cout << ans[i]<< " ";
    // }
    
    // cout<<endl; 
    // cout<<"Search Element in BST"<<endl;
    // int key = 60; 
    // bool result = SeachInBST(root,key);
    // if(result){
    //     cout<<"Element is Present in BST"<<endl;
    // }else{
    //     cout<<"Element is not Present in BST"<<endl;
    // }
    // cout<<"Delete Operation in BST "<<endl;
    
    // int Dkey = 6;
    // cout<<"Deleting "<<Dkey<<endl;
    // Node* Newresult = deleteInBST(root,Dkey);
    
    // if(Newresult->data){
        
    //     cout<<endl;
        
    //     cout<<"Delete Section"<<endl;
    //     ans.clear();
    //     InorderTraversal(root,ans);
    //     for(int i = 0; i<ans.size(); i++){
    //         cout<<ans[i]<<" ";
    //     }
    // }
    
  
    // cout<<"Height of Tree "<<endl;
    // int BSTHeight = HeightOFBST(root);\
    // cout<<"Height of Binary Seach Tree   "<<BSTHeight<<endl;
    
    // cout<<"Level orderTraversal "<<endl;
    
    
    
    // LevelOrderTraversal(root);
    
    // cout<<"Check Binar Tree or not with space complexity "<<endl;
    
    // bool flag = false;
    // for(int i = 1; i<=ans.size(); i++){
          
    //       if(arr[i] >= arr[i-1] ){
    //          flag = true;
    //       }
    // }
    
    // if(false)cout<<"Not a BST"<<endl;
    // else{cout<<"Is a BST"<<endl;  }
    
    // cout<<"Check BST Without wit O(1) space "<<endl;
    
    // for(int i = 0; i<arr.size(); i++){
    //     cout<< ans[i]<<" ";
    // }
    
   int prev = INT_MIN;
  
   bool result = checkBST(root,prev);
   
   if(result)cout<<"IS BST"<<endl;
   else{ cout<<"Not BST"<<endl; }
}


vector<int>inputVector={1,2,3,4,5,6};
int left = 0;
int right = inputVector.size()-1;

vector<int>sol;

ArrayToBST(inputVector,left,right,sol);

 
 for(int val:sol){
     cout<<val<<" ";
 }









// don't forget to } --> main