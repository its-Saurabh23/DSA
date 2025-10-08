#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
   int data;
   Node* next;
};
 

Node* reverorder(Node * head){
  
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
      // save next Poinete
      next = curr->next;

      //reverse the nest Pointer;
      curr->next = prev;

      //move Pointers;
      prev = curr;
      curr = next; 
    }
    return prev;

}

void printList_recursion(Node* head){
     
    if(head == NULL){
        return;
    }
    printList_recursion(head->next);
    cout<<head->data <<" --> ";
}

void printList(Node* head){
  Node* temp = head; 
  while(temp != nullptr){
      cout<<temp->data<<" --> ";
      temp = temp->next;
  }cout<< "NULL "<<"\n"; 
}

void push(Node* &head, int new_data){
    Node* new_Node = new Node();
    new_Node->data = new_data;
    new_Node->next = head;
    head = new_Node;
}

int main(){
  Node* head = NULL;
  push(head,1);
  push(head,2);
  push(head,3);
  cout<<"Original List"<<"\n";
  printList(head);
//   cout<<"Reversed order Linked list"<<"\n";
  
//   head = reverorder(head);
//   printList(head);  

  cout<<"Reverse Linked List By Recursion "<<"\n";
  printList_recursion(head);
  return 0; 
}