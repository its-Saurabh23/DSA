#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


bool checkLoopInLinked_List(Node* head){
 unordered_map<Node*,int>mp;
    
    if(head == NULL){
        return false;
    }
    
    Node* temp = head; 
    
    while(temp != NULL){
     if(mp.find(temp) != mp.end()){
        return true;
    }
     //visited mark
      mp[temp] = true;
      temp= temp->next;
    }
   
    return false;
}

bool checkLoopInLinked_List_twoPointerApporach(Node* head){
    
    if(head == NULL){
        return false;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast->next && slow){
        
         slow = slow->next;
         fast = fast->next->next;
         if(slow == fast){
             return true;
         }
    }
    return false;
}

int main(){

     Node* head = new Node{1,NULL};
     head->next = new Node{2,NULL};
     head->next->next = new Node{3,NULL};
     head->next->next->next = head->next;
      
    // cout<<(checkLoopInLinked_List(head) ? "Loop present" :"Loop not Present") <<"\n";
    cout<<(checkLoopInLinked_List_twoPointerApporach(head)?"Loop is Present": "Loop is not Present")<<"\n";
    return 0;
}