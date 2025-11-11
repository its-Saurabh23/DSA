#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int maxSize;

    Stack(int size)
    {
        arr = new int[size];
        maxSize = size;
        top = -1;
    }

      ~Stack() {
        delete[] arr;
    }

    void push(int value)
    {
        if (top == maxSize - 1)
        {
            cout << "Stack is OverFlow" << "\n";
            return;
        }
        arr[++top]  = value;
    }

    int pop(){
        if(top == -1){
          cout<<"Stack is underflow"<<"\n";
          return-1; 
        }
        return arr[top--];
    }

    int peek(){
        if(top == -1){
            cout<<"Stack is Empty "<<"\n";
            return -1;
        }
        return arr[top];
        
    }
};

int main()
{
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout<<"Top Element of Array "<<stack.peek()<<"\n";
    stack.pop();
    cout<<"After Poping,top element of stack is "<<stack.peek()<<"\n";


    return 0;
}
 