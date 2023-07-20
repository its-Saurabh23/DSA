#include <iostream>
#include<queue>
using namespace std;

class node
{
public:
    int data;
    int* left;
    int* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* bulidTree(node* root)
    {
        cout <<"Enter the data"<< endl;
        int data;
        cin>> data;
        root = new node(data);

        if(data == -1){
            return NULL;
        }

    cout<<"Enter the data for inserting in left "<<endl;
      
    root->left = bulidTree(root->left);
    cout<<"Enter the data for inserting in right "<<endl;
    root->right = (root->right);

       return root;

    }


void levelorderTraqversal( node* root){
   queue<node*>q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){

    node* temp = q.front();
    cout<<temp->data<<" ";
    q.pop();
 
  if(temp == NULL){ //old level is completd;
    cout<<endl;
  }
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }

   }

} 
int main()
{
    node* root = NULL;

    // bulidTree
    root = bulidTree(root);
//levelordertraversal
    levelorderTraqversal(root);
    return 0;
}
