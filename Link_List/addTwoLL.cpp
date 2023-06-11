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
    private:  
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

    while(curr != NULL){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next; 
    } 
    return prev;
    } 
   void insertAtTail(ListNode* &head,ListNode* &tail,int val){
        
        ListNode* temp = new ListNode(val);  
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail ->next = temp;
            tail = temp;
        }
    }   
    ListNode* add (ListNode* first,ListNode* second){
     int carry = 0;
     
     ListNode* ansHead = NULL;
     ListNode* ansTail = NULL;
     while(first != NULL || second != NULL || carry !=0 )
     {
        int val1 = 0;
        if(first != NULL){
            val1 = first->val;
        }
        int val2 = 0;
        if(second != NULL){
            val2 =  second ->val; 
        }
        int sum = carry + val1+ val2;
        // digit 
        int digit = sum %10;
        // Create a node to insert the add value
        insertAtTail(ansHead,ansTail,digit);
        
         carry = sum/10;
        if(first != NULL){
            first = first->next; 
        } 
        if(second != NULL){
            second != NULL;
        }
     } 
     return ansHead;
   }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // step 1 reverse the LL

        ListNode* first = reverse(l1);
        ListNode* second = reverse(l2);

        // Step 2 add LL
        ListNode* ans = add(first ,second);
        
        // reverse the ans;  
        ans = reverse(ans);

        return ans;  
    }
};

 */