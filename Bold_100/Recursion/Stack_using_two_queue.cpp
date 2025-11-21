#include<bits/stdc++.h>
using namespace std;


class Stack{

    public:

    queue<int>q1,q2;
    
    void push(int x){
       q2.push(x);
       while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
       }
       swap(q1,q2);
    }

    int pop(){
        if(q1.empty()){
            std::cout<<"Stack is underflow"<<"\n"; 
            return -1;
        }
        int temp = q1.front();
        q1.pop();
        return temp;
    }

    int peek(){
        if(q1.empty()){
            std::cout<<"Stack is underflow"<<"\n";
            return -1;
        }
        return q1.front();
    }

    bool isEmpty(){
        return q1.empty();
    }
    
    void display(){
        if(q1.empty()){
            std::cout<<"Stack is empty"<<"\n";
            return;
        }
        while (!q1.empty())
        {
            std::cout<<q1.front()<<"\n";
        }
    }
};

int main(){
    Stack st;
    std::cout<<"Stack using two Queue "<<"\n";
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // st.display();
    cout<<"\n";

    std::cout<<"Top Element of Stack "<<st.peek()<<"\n";
    std::cout<<"Poping Element from Stack "<<st.pop()<<"\n";
    std::cout<<"After poping Element from Stack "<<st.peek()<<"\n";
    return 0;
}