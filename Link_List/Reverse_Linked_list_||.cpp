/**
 T.C = O(n)
 A.S = (1);

 jsut apply the normal Linked list reversal method With some conditions 
 kind of follow up question
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* ptr = dummy;
        ListNode* currNode = head;

        for(int i = 0; i<left-1; i++){
        ptr = ptr->next;
        currNode = currNode->next; 
        }
        
        ListNode* sublist = currNode;
        ListNode* prevNode = NULL;

        for(int i = 0; i<= right-left; i++){
         ListNode* nextNode = currNode->next;
         currNode->next = prevNode;
         prevNode = currNode;
         currNode = nextNode;
        }
            ptr->next = prevNode;
            sublist->next = currNode;
            return dummy->next;
    }
};