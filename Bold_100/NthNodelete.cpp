void NthNodeDelete(Node* node){
    node->data = node->next->data;
    node->next = node->next->next;
}

Node* NthNodefromEnd(Node* head,int n){
    
    int size = 0;
    Node*temp = head;
    
    while(temp != NULL){
        size  = size + 1;
        temp = temp->next;
    }
    
    int m = (size-n) // 4-2 = 2;
    
    temp = head;
    for(int i = 0; i<m; i++){
        temp = temp->next;
    }
    return temp;
}

Node* NthNodeOptimize(Node* head,int n){
    
    Node* fast = head;
    Node* slow = head; 
    
    for(int i = 0; i<n; ++){
        fast = fast->next;
    }
    
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
