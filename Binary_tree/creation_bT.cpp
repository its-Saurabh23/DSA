#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {

        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting left" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in the right" << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelorderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        { // old level completed
            cout << endl;
            if (!q.empty())// if queue has some element.
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    //left call
    inorder(root->left);
    //Node print
    cout<<root->data<<" ";
    //right call
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case 
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{

    node *root = NULL;
    // creating a tre root->left = buildTree(root->left);e
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order traversal
    cout << "Print level order Traversal " <<endl;
    levelorderTraversal(root);
    cout<<"inorder traversal is"<<endl; 
    inorder(root);
    
    cout<<"pre order traversal"<<endl;
    preorder(root);

    cout<<"post order traversal"<<endl;
    postorder(root);
    return 0;
}