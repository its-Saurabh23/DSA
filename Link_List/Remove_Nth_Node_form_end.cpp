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


// 1 pass 
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;

        for(int i = 1;i<=n; i++){
            temp = temp->next;
        } 
        if(temp == NULL){
            ListNode* res = head->next;
            delete(head);
            return res;
        }
        ListNode* prev  = head;

        while(temp != NULL && temp->next != NULL){
         prev = prev->next;
         temp = temp->next;
        }
      
       ListNode* del = prev->next;
       prev->next = prev->next->next;
       delete(del);

       return head;
    }
};