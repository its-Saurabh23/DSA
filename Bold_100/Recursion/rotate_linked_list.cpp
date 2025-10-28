#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
     data = d;
     next = nullptr;
    }
};

int getLength(Node* head){
    int len = 0;
    if(head == NULL){
          return len;
        }

    Node* temp = head;
    while(temp != NULL){
           len = len + 1;
           temp = temp->next;
    }
    return len;
}

Node*rotate_linke_list(Node* head,int k,int len){

     if(head == NULL){
        return NULL;
     }
     
     int count = k%len;

     if(len == 1 || len == k || count == 0){
        return  head;
     }

    int i = 0;
    int breakPoint   = len-k;

    Node* prev = NULL; 
    Node* curr = head; 
       
    for(int i = 0; i<breakPoint; i++){
        prev = curr;
        curr = curr->next;
    }
    
     prev->next = NULL;      
     Node* newHead = curr;

      while(curr->next != NULL){
           curr = curr->next;
      }
      curr->next = head;
      return  newHead;

}

void print(Node* head){
     
    if(head == NULL){
         cout<<"List is Empty"<<"\n";
         return;
    }

    Node* temp = head;
    while(temp != NULL){
         cout<<temp->data <<"-> ";
         temp = temp->next;
    }cout<<"NULL";
}
int main(){

    Node* head = NULL;
    head = new Node (1);
    head->next = new Node(2);
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    print(head);
    cout<<"\n";
    int len = getLength(head);
    // cout<<"Lenght "<< len<<"\n";
    int k = 2;
    head = rotate_linke_list(head,k,len);
    cout<<"\n"<<"After rotation"<<"\n";
    print(head);

    return 0;
}