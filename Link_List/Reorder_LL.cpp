/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        // base case
        if(head == NULL || head->next == NULL){
            return head;
        }

        // recursive call & sotore the pointer
        ListNode* last = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return last; 
    }  
    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
  
//    Step 1 Find the Mid 
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }

//    Step 2 reverse the LL after mid 
        ListNode* rev = reverseLL(slow);

        ListNode* curr = head;

//     Step 3 Main Logic 
        while(rev->next != NULL){
           ListNode* tempcurr = curr ->next;
           curr->next = rev;

           ListNode* temprev = rev->next;
           rev->next = tempcurr;

           curr = tempcurr;
           rev = temprev; 

        }  
    }
};