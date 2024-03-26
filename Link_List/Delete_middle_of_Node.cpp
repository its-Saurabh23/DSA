// T.C - O(n);
// A.S. - O(1);

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      095. Delete the Middle Node of a Linked List
      if(head == NULL || head->next == NULL){
         return NULL;
      }

      ListNode* fast = head;
      ListNode* slow = head;
      ListNode* prevslow = NULL;

      while(fast != NULL && fast->next != NULL){
            prevslow = slow;
            slow = slow->next;
            fast = fast->next->next; 
        }
        prevslow->next = slow->next;
        delete(slow);
        return head;

    }
};