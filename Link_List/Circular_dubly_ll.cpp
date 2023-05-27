#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next =NULL;
    }
 
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
        delete next;
        next = NULL;
        }
        cout<<"meory free for node with data "<<value<<endl;
    }
};

void insertNode(Node* tail,int element,int d){

    //assuming that the element is present in the list
    if(tail == NULL){
        Node* newNode = new Node();
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming taht the element is present in the list

        Node* curr = tail;
        while(curr->data !=element){
            curr = curr->next;
        }  
        //element fount ->curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
 Node* temp =tail;
 do {
    cout<<tail->data<<" ";
    tail = tail->next;
 
   } while(tail != temp);
  cout<<endl;
}


int main(){
   
   Node* tail = NULL;
//    empty list
   insertNode(tail,5,3);
   print(tail); 


    return 0;
}