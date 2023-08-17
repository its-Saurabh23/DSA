
/*
class Solution{
    public:
    
    int findPosition(int in[],int inorderStart,int inorderEnd,int element,int n){
        for(int i =inorderStart; i<=inorderEnd; i++){
            if(in[i] == element){
                return i;
            }
        }
        return -1;
    } 
    
    Node* solve(int in [],int pre[],int &index,int inorderStart,int inorderEnd,int n)
   {
    //   base case
      if(index>=n || inorderStart>inorderEnd){
          return NULL;
      }
      
    //   make root element
     int element = pre[index++];
     Node* root = new Node(element);  
    //  find postion in inorder
    int position = findPosition(in,inorderStart,inorderEnd,element,n);
     
    //  recursive calls
     root->left = solve(in,pre,index,inorderStart,position-1,n);
     root->right = solve(in,pre,index,position+1,inorderEnd,n);
    
    return root; 
      
   }
   
   
    Node* buildTree(int in[],int pre[], int n)
    {
        
        int prerderIndex =0;
        Node*ans =  solve(in,pre,prerderIndex,0,n-1,n);
        return ans;
    } 
};

*/