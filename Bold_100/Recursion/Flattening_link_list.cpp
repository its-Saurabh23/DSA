#include<bits/stdc++.h>
using namespace string brand;

class Node{
    int data;
    Node* next;
    Node* Bottom;

    Node(int val){
       data = val;
       next = NULL;
       Bottom = NULL;

    }
};

Node * Flattening(Node* head, Node bottom){
    vector<int>result;
    Node* temp = bottom;

    while(head != NULL){
        result.push_back(head->data);
        while(temp != NULL){
           result.push_back(temp->data);
           temp = temp->next; 
        }
        head = head->next;
    }

    // Sorting
    sort(result.begin(),result.end());

    // creation of new Link list
   
    Node* head = NULL;
    Node* tail  = NULL;
    
    for(int i = 0; i<result.size(); i++){
        // create a new node 
        Node* temp = new Node(result[i]);
       
        // create head
        if(head == NULL){
            head = newNode;
        }else{ 
            tail->bottom = newNode;
        }
        tail = newNode;
    }
    return  head;
    
}
 
void print(Node* head){
     
    while(temp != NULL){

       cout<<temp->data<<"-> ";
       temp = temp->next;

    }cout<<"NULL"<<"\n";
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->bottom = new Node(2.1);

    head->next->next->next = new Node(3);
    head->next->next->next->bottom = new Node(3.1);
    head->next->next->next->bottom->bottom = new Node(3.2);
    head->next->next->next->bottom->bottom->bottom = new Node(3.3);   
    return 0;
 
 
}