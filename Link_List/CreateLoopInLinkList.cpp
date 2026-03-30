 #include<bist/stdc++.h>
 using namespace std;
 
 class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        data = d;
        next = NULL;
    }
 };
 
 class LinkList{
    private:
    Node * head;
    
    public:
    LinkList(){
        head = NULL;
    }
    
    void insert(int val){
        Node *newNode = new Node(val);
        
        if(head == NULL){
            head = newNode;
            return;
        }
        Node*temp = head;
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next = newNode;
    }
    
    void createLoopInLinglyList(int pos){
        if(head == NULL){
            std::cout << "List is enmpty" << std::endl;
            return;
        }
        Node* temp = head;
        Node* cycleNode = NULL;
        int count = 1;
        while(temp->next != NULL){
            if(count == pos){
                cycleNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next =cycleNode;  
    }
    bool hasCycle(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            float = fast->next;
            
        if(slow == fast){
            return true;
        }
        }
        return false;
    }
    
    Node* findCycleStart(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next-next;
            if(slow == fast){
                slow = head;
                
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
    
    void removeCycle(){
    
    Node* start = findCycleStart();
     if(start == NULL)return;
     
    Node*temp = start;
    
     while(temp->next != start){
        temp = temp->next;
     }
     temp->next = NULL;
    }
 };
 
 
 int  mian(){
     createLoopInLinglyList(4);
     return 0;
 }
