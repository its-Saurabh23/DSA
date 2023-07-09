#include<bits/stdc++.h>
using namespace std;

// implementation of Queue through array

class Queue{

// data member
int *arr;
int  qfornt;
int  rear;
int size;


//constructor
Queue(){
    size = 100001;
    arr = new int[size];
    qfornt = 0;
    rear = 0;
    
} 

// Functiosn in Queue.

bool isEmpty(){
    if(qfornt == rear){
        return true;
    }
    else{
        return false;
    }
}
    //  adding in queue
int enqueue(int data){
    // checking that the Queue is full of not
    if(rear == size){
        cout<<"Queue is full"<<endl;
    }
    else{
     arr[rear] = data;
     rear++;

    }
}
    // poping from queue
int dqueue(){
    // check that queue is empty of not 

    if(qfornt == rear){
        return -1;
    }
    else{
        int ans = arr[qfornt];
        arr[qfornt] = -1;
        qfornt++;
        if(qfornt == rear){
        qfornt = 0;
        rear = 0;
    }
     return ans;
    }
}

int fornt(){
    if(qfornt ==rear){
        return -1;
    }
    else{
        arr[qfornt];
    }
}

};


int main(){

    return 0;
}


// Time complexity for this program is O(1);