#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  
};

Node* deleteInLinkList(Node* head,int node_to_delete){
    
       if(head == NULL){
           return NULL;
       }
       
       if(head->data == node_to_delete){
           Node* temp  = head;
           head = head->next;
           
           delete temp;
           return head;
       }
       
       Node* temp = head;
       Node* prev = NULL;
       
       while(temp != NULL && temp->data != node_to_delete){
           prev = temp;
           temp = temp->next;
       }
        
        if(temp == NULL){
            cout<<"Node to delete Does not exit "<< node_to_delete << "\n";
            return NULL;
        }
       
        prev->next = temp->next; 
        
        delete temp;
        
        return head;
}

Node* reverse_LinkedList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next; 
    }
    return prev;
}
 
void printMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"Mid of the Link list "<<slow->data<<"\n";
} 


void makeLinkedList(Node* &head,int new_data){
    Node* new_Node = new Node();
    new_Node->data = new_data;  
    new_Node->next = head;    
    head = new_Node;
}

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
       std::cout << temp->data <<"--> ";
       temp = temp->next;
  }cout<<"NULL";
}


int main(){
    Node* head = NULL;
    
    makeLinkedList(head,10);
    makeLinkedList(head,20);
    makeLinkedList(head,30);
    makeLinkedList(head,40);
    makeLinkedList(head,50);
    cout<<"Linked List traversal"<<"\n";
    cout<<"\n";
    print(head);
    // cout<<"\n";
    // cout<<"\n";
    
    // cout<<"Mid of the Linked List"<<"\n";
    // printMid(head);
    
    // cout<<"\n";
    // cout<<"\n";
    // cout<<"Reverse Linked List"<<"\n";
    // head = reverse_LinkedList(head);
    // print(head);
    // cout<<"\n";
    cout<<"\n";
    cout<<"Delete in Link list"<<"\n";
    head = deleteInLinkList(head,30);
    cout<<"\n";
    cout<<"Print after Deletion in linked list"<<"\n";
    print(head);
    
    return 0;
 }