#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* next;

// constructor 

Node(int d){
    this->data = d;
    this->next = NULL;
}

~Node(){
    int val = this->data;
     if(this->next != NULL){
        delete next;
        next = NULL;
     }
     cout<<"memory is free for node with data "<<val<<endl;
}
};

void insetNode(Node* &tail,int element,int positoin){
    
}
int main(){
    
    return 0;
}