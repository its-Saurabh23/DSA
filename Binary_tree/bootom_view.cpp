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