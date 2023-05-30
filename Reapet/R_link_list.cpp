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
void insertAtPostion(Node* &head,int position, int d){
 
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

    // creating a node

    Node* nondeToinsert = new Node(d);
    nondeToinsert->next = temp->next;
    temp->next= nondeToinsert; 
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

insertAtPostion(head,1,22);
print(head);


return 0;
}