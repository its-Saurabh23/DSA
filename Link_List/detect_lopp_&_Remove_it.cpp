/*
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        map<Node*, int>mp;
        Node* prev;
        
        while(head !=NULL){
            mp[head]++;
            prev = head;
            head = head->next;
            if(mp[head]>1){
                
                head = prev;
                head->next = NULL;
                break;
            }
        }
    }
};

*/