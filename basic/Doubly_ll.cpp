 #include<bits/stdc++.h>
 using namespace std;
 
 class Node{
     public:
     int data;
     Node* next;
     Node* prev;
     
     Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
 };
 
 class DoublyLinkedList{
    public:
    Node *head;
    DoublyLinkedList(){
        head = NULL;
    }
  void Insert(int d){
    // creation of node 
    Node* nodeToInsert = new Node(d);
    
    if(head == NULL){
        head = nodeToInsert;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
    }
   }   

    void Print(){
    Node* temp = head;
    while(temp->next != NULL){
        std::cout <<temp->data <<"->";
        temp = temp->next; 
    }
    cout<<"NULL";
    
  }
  
  void DeleteNode(int deleteDataNode){
     
     if (head == NULL) {
        cout << "List is empty, nothing to delete" << endl;
        return;
    }
    
       // Case 1: Deleting the head node
    if(deleteDataNode == head->data){
        Node* temp = head;
        head = temp->next;
        if(head != NULL){
              head->prev = NULL;
        }
        delete temp;  ;
         return;
    }
 
       Node * temp = head; 
       while(temp->next != NULL){
           if(temp->next->data == deleteDataNode){
               Node* nodeTodelete = temp->next;
              temp->next = nodeTodelete->next;
              if(nodeTodelete->next != NULL){
                  nodeTodelete->next->prev = temp;
              }
              delete nodeTodelete;
              return;
           }
           temp = temp->next;
       }
       cout<<"Node Not Found "<<endl;
  }
 };
 
 int main(){
    DoublyLinkedList obj;
     
     obj.Insert(10);
    //  cout<<"kevin"<<endl;
     obj.Insert(100);
     obj.Insert(12);
     obj.Insert(15);
     obj.Insert(19);
     obj.Insert(120);
     obj.Insert(13);
     obj.Insert(17);
     obj.Insert(18);   
      
     obj.Print();
      cout<<endl;
      cout<<endl;
      //delete function
      obj.DeleteNode(120);
     
       obj.Print();
      cout<<endl;
      cout<<endl;
      obj.DeleteNode(10);
      obj.Print();
      
       cout<<endl;
      cout<<endl;
      obj.DeleteNode(17);
      obj.Print();
      
     return 0;
 }