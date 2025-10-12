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


int getLength(Node* head){
      
    int len = 0;
    while(head){
        len++;
        head = head->next;
    }
    return len;
}

Node* findIntersection(Node* h1 ,Node* h2){
      
    if(h1 == NULL || h2 == NULL){
        return NULL;
    }

    if(h1 == h2){
        return h1;
    }
    return findIntersection(h1->next,h2->next);
}

Node* getIntersection(Node* head1,Node* head2){

    int l1 = getLength(head1);
    int l2 = getLength(head2);

    if(l1>l2){
        int diff = l1-l2;
        while(diff--){
            head1 = head1->next;
        }
    }else{
        int diff = l2-l1;
        while(diff--){
            head2 = head2->next;
        }
    }
    return findIntersection(head1,head2);
}

int main(){
    Node* new_Node;

    //List onde 
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);


    //List Two
    Node* head2 = new Node(9);
    head2->next = new Node(10);

    new_Node = new Node(4);

    //Creating Intersection  with list 1
    
    head1->next->next->next = new_Node;
    new_Node->next = new Node(5);

    // Creating Intersection with list 2
    head2->next->next = new_Node;
    new_Node->next = NULL;

    Node* Intersection_result = getIntersection(head1,head2);

    if(Intersection_result){
        cout<<"Interction at node with value "<<Intersection_result->data<<"\n";
    }else{
        cout<<"No Intersection Present"<<"\n";
    }
    return 0;

}