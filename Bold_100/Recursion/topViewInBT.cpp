#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int data):val(data),left(NULL),right(NULL){};
};

void topLevel(Node* root){
   if(!root)return;

   queue<pair<Node*,int>>q;
   map<int,int>mp;
   q.push({root,0});

   while(!q.empty()){
      Node* temp = q.front().first;
      int HD = q.front().second;
      q.pop();

      if(mp.find(HD) == mp.end()){
          mp[HD] = temp->val;
      }
      if(temp->left){
        q.push({temp->left,HD-1});
      }
      if(temp->right){
       q.push({temp->right,HD+1});
      }
   }

   for(auto it:mp){
      cout<<it.second<<" ";
   }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    topLevel(root);

    return 0;
}