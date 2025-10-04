#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

vector<vector<int>> zigZagTraversal(Node* root) {
    vector<vector<int>> ans;
    if (!root) return ans;

    bool flag = true; // left to right = true, right to left = false
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        stack<int> st;

        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();

            if (flag) {
                level.push_back(temp->data);
            } else {
                st.push(temp->data);
            }

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }

        if (!flag) {
            while (!st.empty()) {
                level.push_back(st.top());
                st.pop();
            }
        }
        ans.push_back(level);
        flag = !flag;
    }
    return ans;
}

// Example usage
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> res = zigZagTraversal(root);

    for (auto &level : res) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
