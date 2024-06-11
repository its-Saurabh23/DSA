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