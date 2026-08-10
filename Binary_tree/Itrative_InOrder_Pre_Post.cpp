#include<bit/stdc++.h>
using namespace std;

struct{
   public:
   int data;
   int height ;
   Node* left;
   Node* right;
   
   Node(int val){
     this->data = val;
     this->height = 1;
     left = NULL;
     right = NULL;
   }
};


Solution{
    public:
    void InorderTraversal(Node* root){
        if(!root){
         std::cout<<"Tree is empty"<<std::endl;
         return;
        }
         Node* curr = root;
         stack<Node*>st;

         while(!st.empty() || curr != NULL){
            
            while(curr != NULL){
              st.push(curr);
              curr = curr->left;
            }
            curr = st.top();
            st.pop();
            std::cout<<curr<<" ";
            curr = curr->right;
         }
        
    }
    void PreOrderTrversal(Node* root){
        if(!root){
            std::cout<<"Tree is empty"<<std::endl;
            return;
        }
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
           std::cout<<temp->data<<std::endl;

           if(temp->right){
            st.push(temp->right);
           }
           if(temp->left){
            st.push(temp->left);
           }
        }
    }  
    void PostOrdertraversal(Node* root){
        if(!root){
            std::cout<<"Tree is empty"<<std::endl;
            return;
        }

        stack<Node*>st1;
        stck<Node*>st2;
         
        st1.push(root);

        while(!st.empty()){
            Node* temp = st1.top();

            st1.pop();
            st2.push(temp);

            if(temp->left){
                st1.push(temp->left);
            }
            if(temp->right){
                st1.push(temp->right);
            }
        }
        while(!st2.empty()){
             std::cout<<st2.top();
             st2.pop();
        }
    }


};



int mia(){
    
    Node* root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3); 
    Solution obj;

    obj.InorderTraversal(root); 

    return 0;
}
