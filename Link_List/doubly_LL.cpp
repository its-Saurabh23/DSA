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
 void  insertAtHead(Node* &head,int d){
  Node* temp =new Node(d);
  temp->next = head;
  head->prev = temp;
  head = temp; 
  
 }

void insertAtTail (Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp ->prev = tail;
    tail = temp;
}

// At any position
void insertAtPosition(Node* &tail, Node* &head,int position,int d){
//   insert at start
if(position == 1){
    insertAtHead(head,d);
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
    insertAtTail(head,d);
    return;
 }

// Create Node
 
 Node* nodeToInsert = new Node(d);
  nodeToInsert ->next = temp->next;
  temp->next ->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev=temp;



}

int main()
{

    Node *node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

     insertAtHead(head,13);
    print(head);

    insertAtHead(head,8);
    print(head);
   
   insertAtTail(tail,25);
   print(head);

   insertAtPosition(tail,head,2,100);
   print(head);
    
   insertAtPosition(tail,head,1,101);
   print(head);

   insertAtPosition(tail,head,8,102);
   print(head);
    return 0;
}