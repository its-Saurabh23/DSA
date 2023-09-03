/*
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    
    void levelorederteaversal(Node* root,vector<int> &ans){
    queue<Node*>q;
    
    q.push(root);
    
    while(!q.empty()){
        
        Node * temp = q.front();
        
        ans.push_back(temp->data);
        
        q.pop();
        
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
        
    }
    vector<int> levelOrder(Node* node)
    {
         vector<int>ans;
         levelorederteaversal(node,ans);
         return ans;
    }

*/
//  ans is return  in vector 