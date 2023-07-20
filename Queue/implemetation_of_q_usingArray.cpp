#include<bits/stdc++.h>
using namespace std;




// ///////////////////Not Completd..




void enqueue(int size,int arr[],int front,int rear,int value){
//putting value is array 
  
  //overflow conditon
  if(rear == size-1){
    cout<<"overflow condiotn"<<endl;
  }
  else if(front == -1 && rear ==-1){
          front = rear = 0;
          arr[rear] = value;
  }
  else{
     rear++;
     arr[rear] = value;
  }
}
void print(int size,int arr[],int front,int rear){
     cout<<"sdfs"<<endl;
    for(int i = front; i<size; i++){
        cout<<" " <<arr[i];
    }
}

int main(){

int size = 5;
int arr[size];

int front = -1;
int rear = -1;
enqueue(size,arr,front,rear, 12);
enqueue(size,arr,front,rear, 14);
enqueue(size,arr,front,rear, 1);
enqueue(size,arr,front,rear, 10);

print(size,arr,front,rear);
    return 0;
}