/*
class Solution {
  public:
    vector <int> bottomView(Node *root) {
    
      vector<int>ans;
    //   base case
    if(root==NULL){
        return ans;
    }
    map<int,int>topnode;
    
    queue<pair<Node*,int> > q;
                    //data,hd
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        
    pair<Node*,int> temp = q.front();
    q.pop();
    Node* frontNode = temp.first;
    int hd = temp.second;
    // mapping 
    topnode[hd] = frontNode->data;
    
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));
    }
    if(frontNode->right){
        q.push(make_pair(frontNode->right,hd+1));
    }
    }
    
    for(auto i:topnode){
        ans.push_back(i.second);
    }
    return ans;
    }
};

*/

#include<bit/stdc++.h>
using namespace std;

class  Node* {
  public:
  int value;
  int height;

  Node*left;
  Node* right;

  Node(int  data){
   data = value;
   height = 1;
   left = NULL;
   right = NULL;
  }
};

void BottomView(Node* root){
    
    if(!root){
     return;
    }

    map<int,int>mp;  // all ready store in soted form 
    queue<pair<Node*,int>>q;    
    q.push({root,0});

    while(!q.empty()){
       auto it = q.front();
       q.pop();

       Node* temp = it.first;
       int HD = it.second;

        mp[HD] = temp->data;   // bottom view store 

       if(temp->left){
        q.push({temp->left,HD-1});
       }
       if(temp->right){
        q.push({temp->right,HD+1});
       }
    }
    for(const auto &it:mp){
        std::cout<<x<<" ";
    }
}


int mian(){
   
    Node* root = NULL;
    BottomView(root);
    return 0;
}
