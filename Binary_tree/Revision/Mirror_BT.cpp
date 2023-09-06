/*
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    
    void solve(Node* root){
        // base case 
        if(root == NULL){
            return;
        }
        solve(root->left);
        
        solve(root->right);
        
    //   swapping 
    Node* temp = root->left;
    root->left  = root->right;
    root->right = temp;
        
    }
    void mirror(Node* node) {
        
        solve(node);
    }
};
int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str;
        getline(cin, str);
        Node *root = buildTree(str);
        Solution ob;
        ob.mirror(root);
        inOrder(root);
        cout << "\n";
    }

    return 0;
}  
*/


// logic  swaping of elements