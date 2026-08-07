#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    int height;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        height = 1;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool IsIdentical(Node* root1, Node* root2) {

        // Both trees are empty
        if (root1 == NULL && root2 == NULL)
            return true;

        // One tree is empty
        if (root1 == NULL || root2 == NULL)
            return false;

        // Data should also be equal
        if (root1->data != root2->data)
            return false;

        return IsIdentical(root1->left, root2->left) &&
               IsIdentical(root1->right, root2->right);
    }
};

int main() {

    // Tree 1
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    // Tree 2
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    Solution obj;

    bool ans = obj.IsIdentical(root1, root2);

    if (ans)
        cout << "Trees are Identical\n";
    else
        cout << "Trees are Not Identical\n";

    return 0;
}
