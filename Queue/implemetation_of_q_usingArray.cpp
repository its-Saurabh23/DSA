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




#include<bits/stdc++.h>
using namespace std;

class Queue{
   public:
   
   int *arr;
   int front;
   int rear;
   int size;

   Queue(int s){
      size = s;
      arr = new int [size];
      front = -1;
      rear = -1;    
   } 


   bool isEmpyt(){
    
    if(front == -1 || front > rear){
        return true;
    }
   return false;
   }

   void enqueue(int val){   
  
    if(rear > size-1){
        cout<<"Queue is full"<<endl;
        return;
    }

    if(front == -1 && rear == -1){
        front = rear = 0;

    }else{
         rear++;
    }
    arr[rear] = val;
   } 

   int dQueue(){
    if(isEmpyt()){
        cout<<"Queue is empty "<<endl;
        return -1;
    }

       int  popelement = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }else{
            front++;
        }
    return  popelement; 
    }

   int TopElement(){
    if(isEmpyt()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return arr[front];
   }

   void printQueue(){
      if(isEmpyt()){
        cout<<"Queue is empty "<<endl;
        return;
      }
     cout<<endl;
     cout<<"Queue element:"<<" ";

     for(int i = front; i<= rear; i++){
         cout<<arr[i] <<" ";
     }
     cout<<endl;
   }
};

int main(){

  Queue qobj(5);
  qobj.enqueue(80);
  qobj.enqueue(20);
  qobj.enqueue(30);
  qobj.enqueue(40);
  qobj.enqueue(10);
    
   cout<<"After enqueuing elements:"<<endl;
   qobj.printQueue();
   cout<<endl;
  
   cout<<"Dqueue element "<< " "<<qobj.dQueue(); 
   
   qobj.printQueue();
  cout<<endl;
  cout<<"Top Element of Queue "<<qobj.TopElement()<<endl;
 return 0;

    return 0;
}
 