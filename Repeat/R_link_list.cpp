/*

#include<iostream>
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
  // destructor

  ~Node(){
    int value =this->data;
    // memory free
    if(this->next != NULL){
      delete next;
      this->next = NULL;
    }
    cout<<" memory is free foe the node with data "<<value<<endl;
  }
};

void insertAtHead(Node* &head,int d){

    // New node create
    Node* temp = new Node(d);
    temp->next =head;
    head = temp;

}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtPostion(Node* &tail,Node* &head,int position, int d){

   //AT starting position

   if(position == 1){
    insertAtHead(head,d);
    return ;
   }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }

     if(temp->next == NULL){
       insertAtTail(tail,d);
       return ;
     }
    // creating a node

    Node* nondeToinsert = new Node(d);
    nondeToinsert->next = temp->next;
    temp->next= nondeToinsert;
}

void deleteNode(int positon,Node* &head){
    // deleting first Node
    if(positon == 1){
      Node* temp = head;
      head = head->next;
      // memeory free start Node
      temp->next=NULL;
      delete temp;
    }
    else{
      // middle node or last Node
      Node* curr = head;
      Node* prev = NULL;

      int cnt = 1;
      while(cnt <positon){
        prev = curr;
        curr = curr->next;
        cnt++;
      }
    prev->next = curr->next;
    curr->next =NULL;
   delete curr;
    }
}

int main(){

// create a new node
Node* node1 = new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;


// head Pointed
Node* head = node1;
Node* tail = node1;

print(head);

insertAtTail(tail,12);

print(head);

insertAtTail(tail,15);

print(head);

insertAtPostion(tail,head,4,22);
print(head);

cout<<"head "<<head->data<<endl;

cout<<"tail "<<tail->data<<endl;

deleteNode(3,head);
print(head);
return 0;
}

*/

#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  // constructor
  Node(int d)
  {

    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }

  ~Node(){
    int val =this->data;
    if(next != NULL){
      delete next;
      next = NULL;
    }
    cout<<"memory free for node with data "<<val<<endl;
  }
};

// gives the length the Linked List
int getLenght(Node *head)
{
  int len = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}

// Traversing the Linked  list
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node* &tail,Node *&head, int d)
{
  //  empty list
  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail =temp;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}

void insertAtTail(Node *&tail,Node* &head, int d)
{

  if (tail == NULL)
  {
    Node *temp = new Node(d);
    tail = temp;
    head = temp;
  }
  else
  {
    //  node Create
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
  }
}

void insertAtPositoin(Node *&tail, Node *&head, int position, int d)
{
  // insert at first position

  if (position == 1)
  {
    insertAtHead(tail,head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  // insertion at last Posiotn
  if (temp->next == NULL)
  {
    insertAtTail(tail,head,d);
    return;
  }
  // creaating node for d
  Node *nodeToinsert = new Node(d);

  nodeToinsert->next = temp->next;
  temp->next->prev = nodeToinsert;

  temp->next = nodeToinsert;
  nodeToinsert->prev = temp;
}

void deleteNode(int position,Node* &head){
  // deleting at first postion
  if(position == 1){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;

  }
  else{
    // delete at any middle node or last node
      Node* curr = head;
      Node* prev = NULL;

       int cnt = 1;
      while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
      }
    curr ->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int main()
{

  // Node* node1 = new Node(10);
  Node *head = NULL;
  Node *tail = NULL;
  print(head);

  cout << getLenght(head) << endl;

  insertAtHead(tail,head, 11);
  print(head);

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

  insertAtHead(tail,head, 13);
  print(head);

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

  insertAtHead(tail,head, 8);
  print(head);
  cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;


  insertAtTail(tail,head, 25);
  print(head);
  cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;


  insertAtPositoin(tail, head, 1, 100);
  print(head);

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

  insertAtPositoin(tail, head, 6, 102);
  print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
  
  deleteNode(3,head);
  print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
  return 0;
}
