 #include<bits/stdc++.h>
 using namespace std;
 
int l = 5,h = 45; // global veriable decleration 
 
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
 
 void print(Node* root){
     
     if(root == NULL){
        return;
     }
     print(root->left);
     cout<<root->data<<" ";
     print(root->right);
 };
 
 void BSTIngiven_rang(Node* root,vector<int>&ans){
     
     if(!root){
        return;
     }
     
     if(root->data>l){
        BSTIngiven_rang(root->left,ans);
     } 
     if(root->data>=l && root->data<=h){
        ans.push_back(root->data);
     }
    
     if(root->data<h){
        BSTIngiven_rang(root->right,ans);
     }
 }
 
 int main(){
     Node* root = new Node(10);
     root->left = new Node(5);
     root->right = new Node(50);
     
     root->left->left = new Node(1);
     
     root->right->right = new Node(100);
     root->right->left = new Node(40); 
     
     std::cout << "Inorder Teaversal " << std::endl;
     print(root);
     
     cout<<"\n";
     cout<<"BST in given Range "<<"\n";
     vector<int>ans;
     BSTIngiven_rang(root,ans);
     
     // range Based loop 
     for(auto &it : ans){
        cout<<it<<" ";  
     }
     return 0;
 }