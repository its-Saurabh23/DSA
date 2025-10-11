#include <bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  Node(int val): data(val), next(NULL)  {} 

};

Node * mergeTwoLink_List(Node* l1,Node* l2){
    
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    
     if(l1 == NULL) return l2;
     if(l2 == NULL) return l1;
     
     if(l1 == NULL && l2 == NULL ) return dummy;
     
     
     while(l1 != NULL && l2 != NULL){
        
        if(l1->data <= l2->data){
            tail->next = l1;
            l1 = l1->next;
        }else{
           tail->next = l2;
            l2 = l2->next; 
        }  
        tail = tail->next;
     }
     
     if(l1 != NULL) tail->next = l1;
     if(l2 != NULL) tail->next = l2; 
      
      Node * newHead = dummy->next;
      delete dummy;
      return newHead;
      
}


Node* MergeLink_List_reverse(Node* l1, Node* l2){
    
    if(l1 == NULL){
       return l2;
    }
    if(l2 == NULL){
    return l1;
    }
    
    if(l1->data<=l2->data){
        
     l1->next = MergeLink_List_reverse(l1->next,l2);   
     return l1;
     
    }else{   
        
    l2->next = MergeLink_List_reverse(l1,l2->next);
    return l2;
    
    }
    
}


void print(Node* head){
    
    if(head == NULL){
        cout<<"List is Empty"<<"\n";
    }
    
     Node* temp = head;
     
     while(temp != NULL){
        std::cout << temp->data <<" ---> ";
        temp = temp->next;
     }cout<<"NULL"<<"\n";
}

int main()
{
    Node* list_1 = new Node(1);
    list_1->next = new Node(2);
    list_1->next->next = new Node(3);

    Node* list_2 = new Node(4);
    list_2->next = new Node(5);
    list_2->next->next = new Node(6);
    
    cout<<"First List"<<"\n";
    print(list_1);
    cout<<"\n";
    
    cout<<"Second List"<<"\n";
    print(list_2);
    cout<<"\n";
    
    cout<<"After Merging  Node"<<"\n";
    Node* new_head = mergeTwoLink_List(list_1,list_2);
    print(new_head);
    cout<<"\n";
    cout<<"\n";
    // cout<<"After Merging Node Recursion"<<"\n";
    // Node* new_head_2 = MergeLink_List_reverse(list_1,list_2);
    // print(new_head_2);

    return 0;
}