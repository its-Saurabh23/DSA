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

// Destructor 
~Node(){
    int value = this->data;
    // memory free..
    if(this->next != NULL){
        delete next;
        this->next  = NULL;
    }
    cout<<"Memory is free for the node with data "<<value<<endl;
}

};

void insertHead(Node* &head,int d){
    // New node create 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;

}


void print(Node* &head){
    Node* temp = head;
      
      while(temp != NULL){
       cout<<temp -> data<<" ";
         temp = temp->next;
      }
      cout<<endl;
} 

void InsertAtPosition(Node* &head,int positon,int d){
   if(positon ==1){
    insertHead(head,d);
    return;
   }

    Node* temp = head;
    int cnt= 1;
    while(cnt <positon-1){
        temp = temp->next;
        cnt++;
    }

    // creating a node for d
    Node* nodeToInsert = new Node (d);
    nodeToInsert ->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position,Node* &head){
// Deletiong first or start Node
 
if(position == 1){
Node* temp= head;
  head = head->next;
//   memeory free strat Node
temp->next = NULL;
  delete temp;
}
 else{
    // deleting any node or last node 
    Node*  curr=head;
    Node* prev = NULL;
     int cnt =1;
     while(cnt<position){
        prev =curr;
        curr = curr->next;
        cnt++;
     }
     prev ->next = curr->next;
     curr->next =NULL;
     delete curr;


 }
}

int main(){
    // create a new Nonde
Node* node1 = new Node(10);
// cout<< node1-> data <<endl;
// cout<< node1-> next<<endl;

// head pointed to node1;
Node*head = node1;
Node* tail  = node1;
print(head);

InsertAtTail(tail,12);
print(head);
InsertAtTail(tail,15);

print(head);

InsertAtPosition(head,4,22);
print(head);


deleteNode(3,head);
print(head);

    return 0;
}










/*
#include <bits/stdc++.h>
using namespace std;

class Node{
 public:
 int data;
 
 Node *next;
  Node(int data){

  this->data =data;
  this->next = NULL;
 }

};
void insertAtHead(Node* &head,int d){
// New node create

Node* temp = new Node(d);
temp->next = head;
head = temp; 
}

void print(Node* &head) {
     Node* temp = head;

     while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     } 
     cout<<endl;
}
main(){
// Creation of node
Node* node1 = new  Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

// Head  pointed to node1;
Node* head = node1;
print(head);

insertAtHead(head,12);

print(head);
return 0;
}


















class Node{
    public:
    int data;
    Node *next;
    // cosntructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
main(){
    Node *node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
}


class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data){
        this->data = data;
        this ->next = NULL;
    }
};
int main()
{   Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}*/