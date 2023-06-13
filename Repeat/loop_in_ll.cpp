#include<bits/stdc++.h>
using namespace std;

// structure for a node in Linked list
struct Node{
    int data;
    Node* next;
};

Node* newNode(int d){
    Node* temp = new Node;
    temp ->data = d;
    temp->next = NULL;

    return temp;
}
 
//  Declaration of Map To the tarck of matked Node
map<Node* ,bool>vis;
bool flag = 0;

void check(Node* head){
     
    //  if head is NULL
    if(head == NULL){
        flag = 0;
        return;
    }
    if(!vis[head]){
        vis[head] = true;
        check(head->next);
    }
    // if a visited Node is found 
    // update the flage;
    else{
        flag = 1;
        return ;
    }
 }

int main(){
//    Create a node
  Node* head = newNode(20);
//   insertion of Linked List
head->next = newNode(4);
head->next->next = newNode(5);
head->next->next->next = newNode(10);


// we are making cycle
 head->next->next->next->next= head;

//  Function to detect the cycle 
 check(head);

//  if flage is true, loop if found 
if(flag){
    cout<<"Loop is found "<<endl;
}
else{
    cout<<"Loop id not found "<<endl;
}
    return 0;
}