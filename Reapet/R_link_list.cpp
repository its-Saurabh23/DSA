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