/*
 Node* sortedMerge(Node* head1, Node* head2)  
{  
    // base case
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL ){
        return head1;
    }
    Node* temp;
    
    if(head1->data < head2->data){
        temp =head1;
        temp ->next = sortedMerge(head1->next,head2);
    }
    
    else{
        temp =head2;
        temp->next = sortedMerge(head1,head2->next);
    }
    
    return temp;
    
    
}  */

// reursive apporach .
// s.p = o(1);
// t.m = o(n+m);