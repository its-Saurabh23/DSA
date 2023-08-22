#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *right;
    Node *left;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node* root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    // base base
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana level complete ho gya
            cout << endl;
            if (!q.empty())
            {
                // q has still has some child
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

Node *insertBST(Node *root, int data)
{

    // base case
    if (root == NULL)
    {
        // actural ceration
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        // data is large than  root
        root->right = insertBST(root->right, data);
    }
    else
    {
        // data is less than data;
        root->left = insertBST(root->left, data);
    }
    return root;
}

void takinginput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertBST(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;
    cout << "Enter the data for creating BST " << endl;
    takinginput(root);

    cout << "Printing BST " << endl;
    levelOrderTraversal(root);

    cout<<endl<< "Printing Inorder " << endl;
    inorder(root);

    cout <<endl<< "Printing Preorder " << endl;
    preorder(root);

    cout <<endl<< "Printing Postorder " << endl;
    postorder(root);

    return 0;
}