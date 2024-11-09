#include<bits/stdc++.h>
using  namespace std;

class Queue{
  public:
  
  int *arr;
  int size;
  int qFront;
  int qrear;
  
  Queue(int s){     // constructor..
   size = s;
   arr = new int [size];
    qFront = 0;
    qrear = 0;
  }
  
bool isEmpty(){
  
  if(qrear == qFront){
    return true;
  }else{
    return false;
  }
}  

  
void enQueue(int val){
  // cout<<"VAll "<<val<<endl;
  if(qrear == size){
    cout<<"Queue is full"<<endl;
    return;
  }else{
    arr[qrear] = val;
    arr[qrear++];
  }
}

int dQueue(){

  if(isEmpty()){
    cout<<"Queue is Empty "<<endl;
    
    return -1;
  }else{
    // cout<<":)"<<endl;
    
    int ans = arr[qFront];   
    arr[qFront] = -1;
    arr[qFront++];
    
    if(qFront == qrear){
      qFront = 0;
      qrear = 0;
    }
    
    return ans;
  }
}

int topElement(){
  if(isEmpty()){
    cout<<"Queue is emepty "<<endl;
  }
  return arr[qFront];
}

};




int main(){
  Queue obj(5);
  
  obj.enQueue(10);
  obj.enQueue(20);
  obj.enQueue(30);
  cout<<"After poping 10 "<<endl;
  obj.dQueue();
  obj.dQueue();
  obj.dQueue();
  
  // cout<<"Pooed element is --->" <<obj.dQueue()<<endl;
  
   cout<<"empty funciton check "<<obj.isEmpty()<<endl;
  // cout<<"TopElement in "<<obj.topElement()<<endl;
  return 0;
}
