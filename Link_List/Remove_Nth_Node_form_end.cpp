// 2 pass apporach

class Solution {
public:
    int lenghtofLinkedList(ListNode* head){
        int lenght = 0;
        while(head != NULL){
            lenght++;
            head = head->next;
        }
        return lenght;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    
        int l = lenghtofLinkedList(head);
        
        // Edge case 
        if(l == n ){
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        int Travelcount = l-n;

        while(Travelcount--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete(temp);

        return head; 
    }
};