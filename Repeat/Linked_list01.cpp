#include<iostream>
using namespace std;

class Node {

public:
int data;
Node* next;


// cosntructor
Node(int data){
    this->data = (data);
    this->next = NULL;
}
};


void insertAtHead(Node* &head,int data){

// new node create 
Node* temp =  new Node(data); 
temp ->next = head;
head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;

}


void insertAtTail(Node* &tail,int data){


Node* temp = new Node(data);
tail ->next = temp;
tail =  tail->next ;

}

void insertAtPosition(Node* &tail,Node* &head,int position,int data){

Node* temp = head;
int cnt = 1;

if(position == 1){
    insertAtHead(head,data);
    return ;

}
while(cnt<position-1){
     
    temp = temp ->next;
    cnt++;
}


if(temp->next == NULL){
    insertAtTail(tail,data);
    return; 
}
// creat a node
Node* nodeToinsert = new Node(data); 
nodeToinsert->next = temp ->next;

temp->next = nodeToinsert;
}
int main(){


// creeate a nw Node..
Node* node1 = new Node(10);
// cout<<node1->data <<endl;

// head pinted to newNode 
Node* head = node1;
Node* tail = node1;
print(head);

insertAtTail(tail,12);
print(head);


insertAtTail(tail,15);
print(head);

insertAtPosition(tail,head,4,22);
print(head);

cout<<"head "<< head->data<<endl;
cout<<"tail "<<tail->data<<endl;
    return 0;
}