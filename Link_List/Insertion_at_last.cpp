#include <bits/stdc++.h>
using namespace std;

// Step 1 Create Node
struct Node
{
    int data;
    Node *next;
};
class LinkList
{
private:
    Node* head;

public:
LinkList(){
    head = NULL;
}
// step 2 Assign the Elemtn
 void push_back(int newElement){
    Node* newNode = new Node();
    // Element Assign
    newNode->data = newElement;
    newNode->next = NULL;
 // Check the Linked List is empty or not,
 // if empty make the new node as head 
    if(head == NULL){
        head = newNode;
    }

    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp-> next;
        }
        // next of the last Node .
        temp->next = newNode;
    }
 }

//  Display the content of the Lsit
void PrintList(){
    Node* temp = head;
    if(temp != NULL){
        cout<<"The List Comntain : ";
        while(temp !=NULL){
            cout<<temp ->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    else{
        cout<<" The List is Empty.\n";
    }
}
};

int main()
{

LinkList MyLsit;
MyLsit.push_back(10);
MyLsit.push_back(20);
MyLsit.push_back(30);
MyLsit.PrintList();
   
    return 0;
}