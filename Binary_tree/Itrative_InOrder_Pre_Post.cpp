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


// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
   int height;
   int data;
   Node* left;
   Node* right;
  
   Node(int value) {
     this->data = value;
     this->height = 1;
     left = NULL;
     right = NULL;
   }
};


class Solution{ 
   public:
   
//    LNR
//     6
//    / \ 
//   1   3

   void InorderTraversal(Node* root){
           
    if(!root){
       std::cout<<"Treee is empty"<<std::endl;
       return; 
    }

    stack<Node*>st;
    Node* curr = root;

    while(!st.empty() || curr != NULL){     // stack containd 6
          
        while(curr != NULL){
            st.push(cuur->data);   // 6,1 -->stack  // 
            curr = curr->left;      
        }
        curr = st.top();
        st.pop();
        std::cout<<curr->data<<std::endl;  // 1-->out from stack
        curr = curr->right;                // 1->right side which is null 
    }
   }

//   NLR
//     6
//    / \ 
//   1   3
   void PreOrderTraversl(Node* root){
   if (!root) {
    cout << "Tree is empty" << endl;
    return;
   }
       
    stack<Node*>st;
    st.push(root);   //  6 

    while(!st.empty()){
        Node* temp = st.top();
        st.pop(); 
        std::cout<< temp->data<<std::endl;  // print 6,1,3
        
        if(temp->right){       // stack -->3              because of LIFO principle
            st.push(right->right);
        }
        if(temp->left){            // stack --->3,1 -->top = 1
            st.push(temp->left);
        }    
    }
   }

//   LRN
//     6
//    / \ 
//   1   3

  
void PostOrderTraversal(Node* root){
    if(!root){
        std::cout<<"Tree is empty"<<std::endl;
        return;
    }
    stack<Node*>st1;      // st1-->1
    stack<Node*>st2;
    
    st1.push(root);

    while(!st.empty()){
        Node* temp = st1.top();   // 1,3
        st1.pop();     
        st2.push(temp);          //6,3,1  ----> out 1,3,6 
        if(temp->left)st1.push(temp->left);
        if(temp->right)st1.push(temp->right);
    }            

    while(!st2.empty()){
        st2.top();
        std::cout<<st2.pop()<<endl;
    }
}

};


int main(){
  Node* root = NULL;
  Solution obj;   
  return 0;    
}
