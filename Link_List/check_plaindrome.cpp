/*
Apporach first 

#include<vector>

void checkPalindrome(arr){

    int n =arr.size();
    int s =0;
    int e = n-1;

    while(s<=e){
        if(arr[s] != arr[e]){
         return 0;
        }
    }
    s++;
    e--;
    }
    return 1;
}


// function

bool palindreome (Node* head){

vector<int> arr;

Node* temp = head;

while(tmep !=NULL){

    arr.push_back(temp->data);
    temp = temp->next;
}
 return  checkPalindrome(arr);

}

*/

// Optimise approarch

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * 
//  Main Funciton Start Here   
 
class Solution {
    private:
    ListNode* getMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast !=NULL && fast->next !=NULL){
            fast = fast ->next->next;
            slow = slow ->next;
        }
        return slow;

    }
    ListNode* reverse(ListNode* head){
       ListNode* curr = head;
       ListNode* prev = NULL;
       ListNode* next = NULL;

       while(curr !=NULL){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }   
       return prev;   
    }
public:
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head ->next == NULL){
            return true;
        }
        // Step - 1 Find middle
        ListNode* middle = getMiddle(head);

        // Step - 2 reverse
        ListNode* temp = middle->next;
        middle->next = reverse(temp);

        //Step 3 - compare Both half

        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        while(head2 !=NULL ){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }   
        // // Step 4 repeat step 2;    Optional
        // ListNode* middle = getMiddle(head);
        // middle->next = reverse(temp); 

          return true;
    }
};

*/