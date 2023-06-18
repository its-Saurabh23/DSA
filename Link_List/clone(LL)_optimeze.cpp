
private:
// insertion at Tail Function. 
Node* insetAtTail(Node* &head,Node* &Tail,int d){
   
   Node* newNode = new Node(d); 
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next;
        tail = newNode;
    }
}

public:
Node* copyList(Node* head){
// step 1 create clone Node
   
Node* cloneHead = NULL;
Node* cloneTail = NULL;
Node* temp = head;
 while( temp !=NULL){

    insertAtTail(cloneHead,cloneTail,temp->data);
    temp = temp->next;
 }

 // step 2 add clone lsit in original list
  
  Node* originalNode = head;
  Node* cloneNode = cloneHead;

  while (originalNode =! NULL && cloneHeada !=NULL)
  {
    Node* next = originalNode->next;
    originalNode->next = cloneNode;
    originalNode = next;

    next = cloneNode->next;
    cloneNode->next = originalNode;
    cloneNode = next;
  }
  
}

// step 3 random ponter  

// step 4 revert the changes step 2

// return ans