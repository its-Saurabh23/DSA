/*
void createMap(int in[],map<int,int>&nodeToIndex,int n){
    
    for(int i =0; i<n; i++){
        nodeToIndex[in[i]] = i;
    }
}

Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,
int n ,map<int,int>&nodeToIndex){
    
    // base case
    if(index<0 || inorderStart>inorderEnd){
        return NULL;
    }
    
    // create root element
    int element = post[index--];
    Node* root = new Node(element);
    
    // find mapping 
    int position = nodeToIndex[element];
    
    // recursive call
    root->right = solve(in,post,index,position+1,inorderEnd,n,nodeToIndex);
    // left call
    root->left = solve(in,post,index,inorderStart,position-1,n,nodeToIndex);
    
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    int postorderIndex = n-1;
    map<int,int>nodeToIndex;
    // mapping
    createMap(in,nodeToIndex,n);
    Node* ans = solve(in,post,postorderIndex,0,n-1,n,nodeToIndex);
    return ans;
}


*/