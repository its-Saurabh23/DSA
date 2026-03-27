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


void detchLoopInLinkList(Node* head){
    
    Node* slow = head;
    Node* fast = head;
    
    bool hasLoop = false;
    
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast = fast->next->next;
        
        if(fast == slow){
            hasLoop = true;
            break;
        } 
    }
    if(!hasLoop){
        cout<<"No Loop is Present"<<"\n";
        return;
    }
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    cout<<"Loop start at node "<<slow->data<<"\n"<<endl;
    Node* temp = slow;
    while(temp->next != slow){
        temp = temp->next;
    }
    temp->next= NULL;
    cout<<"Loop rempove \n";
    
    
    std::cout <<"Loop Node " <<slow->data<< std::endl;
}

*/
