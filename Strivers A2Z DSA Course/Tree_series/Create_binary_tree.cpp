/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
Node* create(vector<int>&arr,int index){
    // stoping condtion..  base case
    if(index >= arr.size() || arr[index] == -1){
        return NULL;
    }

    //create new node 
    Node* newNode = new Node(arr[index]);
    
    newNode->left = create(arr,2*index+1);
    newNode->right = create( arr,2*index+2);

    return newNode;
}

Node* createTree(vector<int>&arr){
    //pass size and elements   
   return create(arr,0);

}