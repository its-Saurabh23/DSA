 /*
 vector <int> zigZagTraversal(Node* root)
    {
        vector<int>result;
        //base case 
        if(root == NULL){
            return result;
        }
        
        // creating queue
        queue<Node*>q;
        q.push(root);
        
        bool leftToRight = true;
        
        while(!q.empty()){
            int size = q.size();
            
            vector<int>ans(size);
            //level Processing 
            for(int i =0; i<size; i++){
                 Node* frontNode = q.front();
                q.pop();
                //Normal inser or reverse insert 
                int index = leftToRight ? i:size -i-1 ;
                ans[index] = frontNode->data;
                 
                if(frontNode->left){
                    q.push(frontNode->left);
                }
                if(frontNode->right){
                    q.push(frontNode->right);
                }
            }
            //direction change 
            leftToRight = !leftToRight;
            
            for(auto i:ans ){
                result.push_back(i);
            }
        }
        return result;
    }

    */