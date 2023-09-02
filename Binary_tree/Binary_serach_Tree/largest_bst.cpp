
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

 
/*******************************MAIN CODE*******************************************************************/ 

 class Solution{
    public:
    int maxi;
    int mini ;
    bool isBST;
    int size;
   

   Solution solve(Node* root,int &ans){

    // base case
    if(root == NULL){
      
      return{INT_MAX,INT_MIN,true,0};
    }
  Solution left  = solve(root->left,ans);
  Solution right = solve(root->right,ans);

 Solution currNode;

    currNode.maxi = max(root->data,right.maxi);
    currNode.mini = min(root->data,left.mini);
    currNode.size = left.size + right.size + 1;
  
//   checking
  if(left.isBST && right.isBST && (root->data >left.maxi && root->data < right.mini)){
        currNode.isBST = true;

  }
  else{
    currNode.isBST = false;
  }

  
  if(currNode.isBST){
    ans = max(ans,currNode.size);
  }

  return currNode;
   }


   int largestBST(Node * root){
    int maxsize = 0;

    Solution temp = solve(root,maxsize);
    return maxsize;
   }
 };
