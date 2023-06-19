
/*
node* findMid(node* head){
    node * slow = head;
    node* fast = head->next;

    while(fast != NULL && fast->next !=NULL){
     slow  = slow->next;
     fast = fast->next->next;
    }
    return slow;
}
node* merge(node* left,node* right){
    if(left == NULL)return right;

    if(right == NULL)return left;

node* ans = new node(-1);
node* temp = ans;

    while(left !=NULL && right !=NULL){
        if(left->data < right->data){
           temp->next = left;
           temp = left;
           left = left->next; 
        }
        else{
           temp->next = right;
           temp = right;
           right = right->next; 
        }
    }

    while(left !=NULL){
    temp->next = left;
    temp = left;
    left = left->next;
    }

    while(right !=NULL){
    temp->next = right;
    temp = right;
    right = right->next;
    }
    ans = ans->next;
    return ans;
}
node* mergeSort(node *head) {
    
    // base case ;
    if(head == NULL || head->next == NULL){
        return head;
    }
    //step 1 find mid
    node* mid = findMid(head);

    node* left = head;
    node* right = mid->next;
    mid->next = NULL;

   // sort right left part by recursive
 
   left = mergeSort(left);
   right = mergeSort(right);

   //merge two left and right 
  
  node* result = merge(left,right); 
   
   return result;
}

*/