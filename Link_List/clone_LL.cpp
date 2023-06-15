/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class Solution {
private:
void insertAtTail(Node* &head,Node* &tail,int data){
     Node* newNode = new Node(data);

     if(head == NULL){
        head = newNode;
        tail  = newNode;
     }
     else{
         tail->next = newNode;
         tail = newNode;
     }
}
public:
    Node* copyRandomList(Node* head) {
        // step 1 copy;
     Node* cloneHead = NULL;
     Node* cloneTail = NULL;
     
     Node * temp = head;

     while(temp != NULL){
         insertAtTail(cloneHead,cloneTail,temp->val);
         temp = temp->next;
     }

    //  step 2 create mapping of rrandom pointer
    unordered_map<Node*, Node*> oldTonewNode;
    Node* originalHead = head;
    Node* cloneNode = cloneHead;
      
    //   mapping of colne Node or originalNode
    while(originalHead !=NULL &&cloneNode !=NULL){
        oldTonewNode[originalHead] = cloneNode;
        originalHead  = originalHead->next;
        cloneNode = cloneNode->next;
    } 
    // handle random pointer
    
    originalHead = head;
    cloneNode = cloneHead;
     
   while( originalHead != NULL && cloneNode != NULL){
     cloneNode ->random = oldTonewNode[originalHead->random];
     originalHead = originalHead->next;
     cloneNode = cloneNode->next;    
   }
   return cloneHead;
    }

};

*/