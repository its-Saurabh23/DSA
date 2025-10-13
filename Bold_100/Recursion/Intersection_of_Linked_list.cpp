#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  
  int data;
  Node* next;
  
  Node(int val){
    data = val;
    next = NULL;
  }
    
};


Node* getIntersection(Node* h1,Node* h2){
    
    while(h2 != NULL){
        
        Node* temp = h1;
        
        while(temp != NULL){
            
            if(temp == h2){   // comparing address 
                return h2;
            }
            temp = temp->next;
        }
        h2 = h2->next; 
    }
    return NULL;
}


int main()
{
    
    Node* new_node;  // This will the node for intersection 
    
    // Lsit 1;
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    
    
    //List 2;
    Node* head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(7);
    head2->next->next->next = new Node(8);
    
    // create Intersection with list 1
    new_node = new Node(4); 
    head1->next->next->next = new_node;
    
    // create Intersection with list 2
    head2->next->next->next->next = new_node;
    
    new_node->next = new Node(11);
    new_node->next->next = new Node(12);
    new_node->next->next = NULL;
    
    Node* Intersection_Result = getIntersection(head1,head2); 
    
    if(Intersection_Result){
    std::cout << "Intersection is Present at Node "<<Intersection_Result->data<< std::endl;
    }else{
        cout<<"Intersection is not Present "<<"\n";
    }
    
    return 0;
}