

/*
// Loop detection
Node* floydDetect(Node* head){

    if(head == NULL){
      return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow !=NULL && fast !=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next 
        }
        slow = slow->next;

        if(slow == fast){
            //  Loop is present in LL
            cout<<"Loop present at "<<slow->data;
            return slow
        }
    }
    return NULL;
}



// Loop start node


Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetect(head);
     
    Node* slow = head;

    while(solw != intersection){
        slow= slow->next;
        intersection = intersection ->next;
    }
    return slow;
}


// Remove Loop

void  removeLoop(Node*head){
    if(head ==NULL){
        return ;
    }

    Node* statLoop = getStartingNode(head);
    Node* temp = startLoop;

    while(temp !=startLoop){
        temp = temp ->next; 
    }
    temp->next = NULL;
}




/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

 

 codestdio ..Question..
Node* flydDectectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;

        if(fast !=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getstartLoop(Node* head){
   
    if(head == NULL){
        return NULL;
    }
    
    Node* intetrsection = flydDectectLoop(head);
    Node* slow  = head;
    if(intetrsection == NULL){
        return NULL;
    }
    while(slow !=intetrsection){
        slow = slow->next;
        intetrsection = intetrsection->next;
    }

    return slow;

}


Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL){
        return NULL;
    }
    Node* startLoop = getstartLoop(head);
    if(startLoop == NULL){
        return head;
    }
    Node* temp = startLoop;
    while(temp->next !=startLoop){
        temp = temp->next;
    }

    temp->next = NULL;
    return head;
}

*/