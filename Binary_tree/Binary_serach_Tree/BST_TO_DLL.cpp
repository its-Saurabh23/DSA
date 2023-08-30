/*
class Solution
{
    public: 
    void BinaryIntoSortedDLL(Node* root,Node* &head){
        // base case
      if(root == NULL){
            return;
        }
        BinaryIntoSortedDLL(root->right, head);
        root->right = head;
        if(head!=NULL)
        head->left = root;
        head = root;
        BinaryIntoSortedDLL(root->left, head);;
      
      
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
         Node* head = NULL;
         BinaryIntoSortedDLL(root,head);
         
         return head;
    } 
};
*/

// logic  make right part head and connect treat as DLL and then connetct
//  it to root node as head->left to root;
// make root to head;
// do this for left side of BST.