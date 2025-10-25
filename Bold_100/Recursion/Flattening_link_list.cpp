#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* next;
    Node* bottom;

    Node(int val){
        data = val;
        next = nullptr;
        bottom = nullptr;
    }
};

Node* flatening(Node* root){
    vector<int>ans;

    while(root != NULL){
        ans.push_back(root->data);

        Node* temp = root->bottom;  
        while(temp != NULL){
           ans.push_back(temp->data);
           temp = temp->bottom; 
        }
        root = root->next;
    }
  
    sort(ans.begin(),ans.end());

     Node* tail = NULL;
     Node* head = NULL;

    for(int i = 0 ;i <ans.size(); i++){
        Node* newNode = new Node(ans[i]);

        if(head == NULL){
             head = newNode;
        }else{
           tail->bottom = newNode;
        }
        tail = newNode;
    }
    return head;   
}



void print(Node* head){    
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data <<"-> ";
        temp = temp->bottom;
    }cout<<"NULL";
}


Node* Merge_Two_List(Node* l1,Node* l2){

     if(!l1) return l2;
     if(!l2) return l1;

    Node* result;

    if(l1->data <l2->data){
      result = l1;
      result->bottom = Merge_Two_List(l1->bottom,l2);  
    }else{   
        result = l2;
        result->bottom = Merge_Two_List(l1,l2->bottom);
    }
    result->next = NULL;
    return result;

}

Node* flattening_recursion(Node* head){
   
    if(head == NULL || head->next == NULL){
        return head;
    }
    head->next = flattening_recursion(head->next);

    head = Merge_Two_List(head,head->next);   
    return head;
}

int main(){
    Node* head = new Node(10);

    head->bottom = new Node(12);
    head->bottom->bottom = new Node(13);
    head->bottom->bottom->bottom = new Node (14);
    
    head->next = new Node(20);
    head->next->bottom = new Node(21);
    head->next->bottom->bottom = new Node(22);
    
    head->next->next = new Node(30);
    head->next->next->bottom = new Node(31);
    head->next->next->bottom->bottom = new Node(32);
    
    head->next->next->next = new Node(40);
    head->next->next->next->bottom = new Node(45);
    head->next->next->next->bottom->bottom = new Node(46);
    head->next->next->next->bottom->bottom->bottom = new Node(47);

    // head = flattening(head); 
    head = flattening_recursion(head);
    print(head);

    return 0;
}