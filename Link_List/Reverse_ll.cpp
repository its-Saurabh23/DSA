/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

       ListNode* prev = NULL;
       ListNode* curr = head;
       ListNode* forword = curr->next;

       while(curr != NULL){
           forword = curr->next;
           curr->next = prev;
           prev = curr;
           curr = forword;
       }
       return prev;
    }
    
};


// recursive manner 

void reverse(Node* head,Node*curr,Node* prev){
    // base case 

    if(curr == NULL){
      head = prev;
      return ;
    }
  Node* forword = curr->next;
  
  reverse(head,forword,curr);
  curr->next = prev; 
   
}

Node* reverseLinkedList(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    retrun head;
}


// another  recursive apporach

void reverse1(Node* head){

//Base case
if(head==NULL || head->next == NULL){
    return head;
} 
Node* newHea = reverse1(head ->next)
  
  head ->next->next = head;
  head ->next = NULL;

}

 */