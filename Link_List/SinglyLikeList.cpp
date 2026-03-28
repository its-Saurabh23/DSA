#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  Node(int d){
      data = d;
      next = NULL;
  }
};

class LinkList {
  
  private:
  Node* head;
  
  public:
   LinkList(){
    head = NULL;   
   }
   
   void createNode(int val){
       Node* newNode = new Node(val);
       if(head == NULL){
           head = newNode;
           return;
       }

       Node* temp = head;
       while(temp->next != NULL){
           temp = temp->next;
       }
       temp->next = newNode;
   }
   
   void deleteNode(int val){
       
       if(head == NULL){
           cout<<"List is empty";
           return;
       }
       if(head->data == val){
          Node* temp = head;
          head = head->next;
          delete temp;
          return;
       }
       
       Node* temp = head;
       while(temp->next != NULL && temp->next->data != val){
           temp= temp->next;
       }
       if(temp->next == NULL){
           return;
       }
       
       Node* NodeTodelete = temp->next;
       temp->next =temp->next->next; 
       delete NodeTodelete;
       
   } 
   
   void dipslay(){
       Node* temp = head;
       
       while(temp != NULL){
           std::cout << temp->data <<" -> ";
           temp= temp->next;
       }
       cout<<" NULL";
   }

void loopdetch(Node* head){
    if(head == NULL){
        std::cout << "List is empty " << std::endl;
        return;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    bool isLoopFount = false;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            isLoopFount = true;
            break;
        }
    }
    if(!isLoopFount){
        cout<<"No loop found \n";
        return;
    }
    
    // finding that node where loop exit 
    slow = head;
    
    while(slow != fast){
        slow = slow->next;
        fast  = fast->next;
    }
    cout<<"Loop start at: "<<slow->data<<"\n";
    
    // removing loop
    
    Node* temp = slow;
    while(temp->next != slow){
          temp = temp->next;
    }
    temp->next = NULL;
}

   
};

int main(){
    LinkList list;
    list.createNode(10);
    list.createNode(20);
    list.createNode(30);
    
    cout<<"Link List before Deletion "<<"\n";
    list.dipslay();
    cout<<"\n";
    cout<<"After Deletion in Link List"<<"\n";
    list.deleteNode(20);
    list.dipslay();
    return 0;
}
