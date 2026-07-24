#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    int height;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        height = 1;
        left = nullptr;
        right = nullptr;
    }
};

// Height
int getHeight(Node *root)
{
    if (root == nullptr)
        return 0;

    return root->height;
}

// Balance Factor
int getBalance(Node *root)
{
    if (root == nullptr)
        return 0;

    return getHeight(root->left) - getHeight(root->right);
}

// Right Rotation
Node *rightRotation(Node *root)
{
    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    child->height = 1 + max(getHeight(child->left),
                            getHeight(child->right));

    return child;
}

// Left Rotation
Node *leftRotation(Node *root)
{
    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    child->height = 1 + max(getHeight(child->left),
                            getHeight(child->right));

    return child;
}

// Insert
Node *insert(Node *root, int value)
{
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        return root;

    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    int balance = getBalance(root);

    // LL
    if (balance > 1 && value < root->left->data)
        return rightRotation(root);

    // RR
    if (balance < -1 && value > root->right->data)
        return leftRotation(root);

    // LR
    if (balance > 1 && value > root->left->data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // RL
    if (balance < -1 && value < root->right->data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    return root;
}

// Delete
Node *deletion(Node *root, int target)
{
    if (root == nullptr)
        return nullptr;

    if (target < root->data)
    {
        root->left = deletion(root->left, target);
    }
    else if (target > root->data)
    {
        root->right = deletion(root->right, target);
    }
    else
    {
        // Leaf node
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }

        // One child (right)
        else if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // One child (left)
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // Two children
        else
        {
            Node *curr = root->right;

            while (curr->left != nullptr)
                curr = curr->left;

            root->data = curr->data;

            root->right = deletion(root->right, curr->data);
        }
    }

    if (root == nullptr)
        return nullptr;

    // Update height
    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    int balance = getBalance(root);

    // LL
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotation(root);

    // LR
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // RR
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotation(root);

    // RL
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    return root;
}

// Inorder Traversal
void inorder(Node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Delete Entire Tree
void deleteTree(Node *root)
{
    if (root == nullptr)
        return;

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main()
{
    Node *root = nullptr;

    vector<int> values = {50, 30, 70, 20, 40, 60, 80, 10, 25};

    for (int x : values)
        root = insert(root, x);

    cout << "Inorder before deletion:\n";
    inorder(root);
    cout << endl;

    root = deletion(root, 30);

    cout << "Inorder after deleting 30:\n";
    inorder(root);
    cout << endl;

    deleteTree(root);

    return 0;
}
