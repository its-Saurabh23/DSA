/**
  T.C = O(n2);
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
       
    unordered_map<int,ListNode*>mp;
       int PreSum = 0;    
    //    dummy node
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    mp[0] = dummy;
  

       while(head != NULL){
        PreSum += head->val;

        if(mp.find(PreSum) != mp.end()){
          ListNode* start = mp[PreSum];
          ListNode* temp = start;
           int pSum = PreSum;

            while(temp != head){
            //   delete form map
            temp = temp->next;
            pSum += temp->val;

            if(temp != head){
                mp.erase(pSum);
            }
            start->next = head->next;
            }

        }
        else{
            // add to map
            mp[PreSum] = head;
        }
        head = head->next;
       } 
      return dummy->next;  
    }
  
};