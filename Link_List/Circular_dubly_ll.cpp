 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next =NULL;
    }
 
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
        delete next;
        next = NULL;
        }
        cout<<"meory free for node with data "<<value<<endl;
    }
};

void insertNode(Node* tail,int element,int d){

    //assuming that the element is present in the list
    if(tail == NULL){
        Node* newNode = new Node();
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming taht the element is present in the list

        Node* curr = tail;
        while(curr->data !=element){
            curr = curr->next;
        }  
        //element fount ->curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
 Node* temp = tail;
 do {
    cout<<tail->data<<" ";
    tail = tail->next;
 
   } while(tail != temp);
  cout<<endl;
}

void deleteNoDe(Node * &tail, int value){
    // empty list
    if(tail == NULL){
        cout<<"List is empty, please cheack again"<<endl;
     return;
    }
    else{
        // Non empty case
     
        // Assuming that "value" is present int the Linked Lsit 

        Node* pre = tail;
        Node* curr = pre->next;
        while(curr->data != value){
            pre = curr;
            curr = curr->next;
        }
       pre->next = curr->next;
       if(tail == curr){
        tail = prev;
       }
       curr->next=NULL;
       delete curr;
    }
}

int main(){
   
   Node* tail = NULL;
//    empty list
  
   insertNode(tail,5,3);
   print(tail); 
/*
  insertNode(tail,3,5);
   print(tail); 

  insertNode(tail,5,7);
   print(tail); 

  insertNode(tail,5,6);
   print(tail); 
 */
   deleteNoDe(tail,3);
  
    return 0;
}

