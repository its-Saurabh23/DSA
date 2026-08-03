
/*class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
     map<int ,map<int,vector<int > > > nodes;
     queue<pair<Node*,pair<int,int> > >q;
     vector<int> ans;
     
     // base case 
     if(root==NULL)
       return ans;
     
     q.push(make_pair (root,make_pair(0,0)));
     
     while(!q.empty()){
        pair<Node*,pair<int,int> > temp = q.front();
        q.pop();
        
        Node*frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        
        nodes[hd][lvl].push_back(frontNode->data);
        
        if(frontNode->left){
            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
        }
        
     }
      for(auto i:nodes){
          for(auto j:i.second){
              for(auto k:j.second){
                  ans.push_back(k);
              }
          }
      }
      return ans;
    }
};

*/



/*  Returning in 2d vector

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int,map<int,vector<int > > > nodes;
        queue<pair<TreeNode*,pair<int ,int> > >q;
        
        // ans for returning
        vector<vector<int>>ans;
        
       // base case
       if(root == NULL)return ans;


        q.push(make_pair(root,make_pair(0,0)));

        while(!q.empty()){
            pair<TreeNode*,pair<int,int> > temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            //mapping 
            nodes[hd][lvl].push_back(frontNode->val);

            if(frontNode->left){
    q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
             if(frontNode->right){
    q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        
        }
        for(auto &i : nodes){
            vector<int> temp;

            for(auto &j : i.second){
                sort(j.second.begin(), j.second.end());

                for(auto &k : j.second){
                    temp.push_back(k);
                }     
            }

            ans.push_back(temp);
        }
        return ans;
    }
};

*/
#include<bits/stdc++.h>
using namespace std;


class Node{
   public:
   int data;
   int height;

   Node* left;
   Node* right;

   Node(int value){
       data = value;
       height = 1;
       left = NULL;
       right = NULL;
   }
}

void VerticalOrderTraversal(Node* root){
      if(!root){
       return;
      }

      map<int,vector<int>>mp;
      queue<pair<Node*,int>>q;
      
      q.push({root,0});

      while(!q.empty()){
         auto it = q.front();
         q.pop();

         Node* temp = it.first;
         int hd  = it.second;
         mp[hd].push_back(temp->data);

         if(temp->left){
           q.push({temp->left,hd-1});
         }
         if(temp->right){
           q.push({temp->right,hd+1});
         }
      }

      for(const auto &it:mp){
         for(int i:it.second){
            cout<<i<<" ";
         }
         cout<<endl;
      }
}


int main(){
   
    Node* root = NULL;

    VerticalOrderTraversal(root);
}
