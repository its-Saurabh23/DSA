#include<bits/stdc++.h>
using namespace std;

class Node{
 
 public:
 int data;
 Node* next;

// constructor
 Node(int data){
    this->data = data;
    this->next = NULL;
 }

//  destructor
~Node(){
 int value = this->data;

//  memeory free
if(this->next !=NULL){
    delete next;
    this->next = NULL;
}
cout<<"memory is free for node widh data "<<value<<endl;
}
};

void insetNode(Node* tail,int element,int d){

if(tail == NULL){
// create Node
Node* newNode = new Node(d);
tail = newNode;
newNode->next = newNode;
}
else{
    Node* curr = tail;
    while(curr->data !=element){
       curr =curr->next;
    }

    //elemtn found
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}
}

void print(Node* tail){
    // empty List
    if(tail == NULL){
        cout<<"List is NULL "<<endl;
        return ;
    }
    Node *temp = tail;
    do{
        cout<<tail->data<<" ";
        tail =tail->next;
    }while(tail !=temp);
    cout<<endl;
}
bool isCircularList(Node* head){

//  empty lsit

     if(head == NULL){
        return NULL;
     }
     
     Node* temp =head->next;
     while(temp !=NULL && temp !=head){
        temp = temp ->next;
     } 

     if(temp == head){
        return  true;
     }
     return false;
}


int main(){
Node* tail = NULL;

insetNode(tail,5,3);
print(tail);
insetNode(tail,3,5);
print(tail);

if(isCircularList(tail)){
    cout<<"circular in Nature "<<endl; 
}
else{
    cout<<"Not is circular in nature "<<endl;
}
    return 0;
}