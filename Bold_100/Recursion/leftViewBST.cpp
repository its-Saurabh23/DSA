#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int data):val(data),left(NULL),right(NULL){};
};

void leftView(Node *root){

    if(!root)return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int s = q.size();

        for(int i = 0;i<s; i++){
            Node * temp = q.front();
            q.pop();

            if(i == 0){
                cout<<temp->val<<" ";
            }

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    leftView(root);

    return 0;
}