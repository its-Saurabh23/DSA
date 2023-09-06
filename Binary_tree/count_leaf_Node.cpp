
/*
    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };


void inorderTreaversal(BinaryTreeNode<int>*root,int &cnt){
   //base casae
   if(root == NULL){
    return;
   } 
    inorderTreaversal(root->left,cnt);
    //print  

    if(root->left == NULL && root ->right == NULL){
        cnt++;
    }
    inorderTreaversal(root->right,cnt);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){

   int cnt = 0;
   inorderTreaversal(root,cnt);
    return cnt;


 }

 */
 