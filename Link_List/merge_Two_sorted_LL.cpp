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

Node* MergerTwoSortedLinkList(Node* l1, Node* l2) {

    Node dummy(-1);          // dummy node
    Node* tail = &dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // attach remaining nodes
    if (l1 != NULL) {
        tail->next = l1;
    }
    if (l2 != NULL) {
        tail->next = l2;
    }

    return dummy.next;
}

// reursive apporach .
// s.p = o(1);
// t.m = o(n+m);
