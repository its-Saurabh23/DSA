#include<bits/stdc++.h>
using namespace std;


class Stack{
public:
// Properties 
int *arr;
int top;
int size;


// behaviour 
Stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
}

 void push(int element){
    if(size - top>1){
        top++;
        arr[top] = element;
    }
    else{
        cout<<"Stack is overflow "<<endl;
    }
 }

 void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack is underflow "<<endl;
    }
 }

int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
      cout<<"Stack is empty "<<endl;
      return -1;
    }
 }

 bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
 }
};
int main(){

Stack st(5);

st.push(22);
st.push(43);
st.push(44);
st.push(44);
st.push(48);
st.push(90);
 
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();

cout<<st.peek()<<endl;
if(st.isEmpty()){
    cout<<"Stack is Empty Meri haa jaan "<<endl;
}
else{
cout<<"Stack is Empty  "<<endl;
}
// creation of stack 


/*
stack<int>s;
// push operation
s.push(2);
s.push(3);

// pop
// s.pop();
cout<<"printing top element "<<s.top()<<endl;
 if(s.empty()){
    cout<<"Stack is empty "<<endl;
 } 
 else{
    cout<<"Not empty "<<endl;
 }

 cout<<"Size of stack is "<<s.size()<<endl;
  
  */



    return 0;
}