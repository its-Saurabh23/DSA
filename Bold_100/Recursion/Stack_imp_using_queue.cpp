#include<bits/stdc++.h>
using namespace std; 

class Queue{
   public:
   queue<int>q;

void push(int val){
     int size = q.size();
      for(int i= 0 ; i<size;i++){
            q.push(q.front());
                q.pop();
          }
    }
int pop(){
    if(is empty()){
        cout<<"Stack is overflow";
               return -1;
      }
   
     int temp = q.front();
                q.pop();

       return temp;
 }
   
};

int main(){

}