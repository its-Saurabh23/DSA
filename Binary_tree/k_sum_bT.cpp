 /*
 public:
 int count=0;
    void preorder(Node *root, int k, unordered_map<int,int>&mp,int prev)
    {
        if(root)
        {
            int curr=prev+root->data ;
            if(mp.find(curr-k)!=mp.end()){
                count+=mp[curr-k];
            }
      
            if(curr==k){
                  count++;
            }
      
             mp[curr]++;
            
            preorder(root->left,k,mp,curr);
            preorder(root->right,k,mp,curr);
            
              mp[curr]--;
        }
    }
    int sumK(Node *root,int k)
    {
         
             unordered_map<int,int>mp;
        preorder(root,k,mp,0);
        
        return count ;
    } */