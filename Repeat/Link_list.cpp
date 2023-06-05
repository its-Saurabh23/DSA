#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;

   Node *next;
   Node(int data){

   this->data =data;
   this->next=NULL;
   }
};
 void insertAtHead(Node* &head,int d){
    // create node 
    Node* temp = new Node(d);
    temp ->next =head;
    head = temp;
 }
 void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){

       cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
 }
bool isCircular(Node* head){
  // empty list
  if(head == NULL){
    return true;
  }
  Node* temp = head->next;
  while(temp !=NULL && temp !=head){
    temp = temp->next;
  }
  if(temp == head){
    return true;
  }
  return false;
}

bool detectLoop(Node* head){
  if(head == NULL){
    return false;
  }
  
  map<Node*,bool> visted;
  Node* temp = head;

  while(temp !=NULL){
    if(visted[temp]==true){
      return true;
    }

    visted[temp] =true;
    temp = temp->next;
  }
  return false;
}
int main(){
  
//   creation of Node 
 Node* node1 = new Node(10);

 //Head poionted Node1;
 Node* head = node1;
 print(head);

insertAtHead(head,12);
insertAtHead(head,25);


/*if(isCircular){
   cout<<"Lisk List is Circular "<<endl;
}
else{
   cout<<"Linked List is not Circular "<<endl;
}
*/
 print(head);
 return 0;
}