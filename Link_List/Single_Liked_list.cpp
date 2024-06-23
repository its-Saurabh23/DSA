#include<iostream>
using namespace std;    list.Insert(30);


class singlLL{
  public:
  int data;
  singlLL *next;
  singlLL(int data): data(data), next(nullptr){}; // constructor 
    
};

class LinkedList{
  private:
  singlLL* head;
  
  public:
  LinkedList(): head(nullptr){};   // constructor
  
  void Insert(int data){
    singlLL * newNode = new singlLL(data);
    if(head == nullptr){
        head = newNode;
    }
    else{
        singlLL * temp = head;
        
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
  }



void DeleteNode(int data){
  if(head  == NUll){
    return;
  }
  if(head->data == data){
    Node* temp = head;
    head = temp->next;
    Delete temp;
    return;
  }
Node* temp = head;
 // get the  previous node of node which we want ot delete 
 while(temp ->next != NUll && temp->next->data != data){
  temp = temp->next;
 }
  //if the Node if Not Found 
  while(temp->next == NUll){
    count<<"Node data " data <<"is Not aviable "<<endl;
  }
  // we foun the node 
    Node* nodeToddelete  = temp->next;
    temp->next = temp->next->next;
    delete nodeToddelete;
    return;
}


 void update(int oldData, int nedData){
     Node* temp = head;
    while(temp->next != NULL){ 
        if(temp->data == oldData){
            temp->data = nedData; 
            return;
        }
        temp = temp->next;
        
    } 
    std::cout << "Node with value"<<oldData <<"Not found" << std::endl;
 }



 void Traversal(){
    singlLL* temp = head;
    
    while(temp != nullptr ){
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
 } 
  
};


int main(){
    
    LinkedList list;
    list.Insert(10);
    list.Insert(20);
    list.Insert(30);
    list.Insert(40);
    list.Insert(50);
    list.Insert(60);
                
    list.Traversal();
    return 0;
}
