#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    //  Constructor..
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
      int val = this->data;
      if(next !=NULL){
        delete next;
        next = NULL;
      }
      cout<<"Meneory free for node data "<<val<<endl;
    }
};
// Traversing a linked list.. 
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next; 
    }
    cout << endl;
}
// Length 
int getLength(Node* head){
int len = 0;
   Node* temp = head;
   while(temp !=NULL){
    len++;
    temp=temp->next;
   }
   return len;
}
 void  insertAtHead(Node* &tail,Node* &head,int d){
 if(head == NULL){
 Node* temp = new Node(d);
 head = temp;
 tail =temp;
 }
 else{
  Node* temp =new Node(d);
  temp->next = head;
  head->prev = temp;
  head = temp;   
 }
 
  
 }

void insertAtTail (Node* &tail, Node* &head, int d){
    if(tail == NULL){
    Node* temp = new Node(d);
    tail = temp;
    head =temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp ->prev = tail;
    tail = temp;
}
    }
   

// At any position
void insertAtPosition(Node* &tail, Node* &head,int position,int d){
//   insert at start
if(position == 1){
    insertAtHead(tail,head,d);
    return;
}

Node* temp = head;
int cnt = 1;
while(cnt<position-1){
 temp = temp->next;
 cnt++;
}

// At Lat Position 

 if(temp ->next == NULL){
    insertAtTail(head,tail,d);
    return;
 }

// Create Node
 
 Node* nodeToInsert = new Node(d);
  nodeToInsert ->next = temp->next;
  temp->next ->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev=temp;



}
void deleteNode(int position,Node* & head){
     
    //  delete first or Start Node
     if(position == 1){
       Node* temp = head;
       temp->next->prev = NULL;
       head= temp->next;
       temp->next=NULL;
       delete temp;
     }  
     else{
      
    //delete any middle or last node
     Node* curr = head;
     Node* prev = NULL;

     int cnt = 1;
     while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
     }
    curr->prev=NULL;
    prev->next = curr->next;
    curr->next = NULL;
    
    delete curr;
    } 
}

int main()
{

    // Node *node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    Node* head =NULL;
    Node* tail =NULL;
    print(head);

    // cout<<getLength(head)<<endl;

 
    insertAtHead(tail,head,11);
    print(head);

 
    insertAtHead(tail,head,13);
    print(head),tail;

 
    insertAtHead(tail,head,8);
    print(head);
   
 
   insertAtTail(tail,head,25);
   print(head);

 
   insertAtPosition(tail,head,2,100);
   print(head);
    
 
   insertAtPosition(tail,head,1,101);
   print(head);

 
   insertAtPosition(tail,head,7,102);
   print(head);
 
   deleteNode(1,head);
   print(head);
   
    return 0;
}