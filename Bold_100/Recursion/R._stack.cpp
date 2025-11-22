#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int x)
    {
        top = -1;
        int size = x;
        arr = new int[size];
    }

    void push(int x)
    {
        if (top == size-1)
        {
            std::cout << "Stack is overflow" << "\n";
            return;
        }
        arr[++top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            std::cout << "Stack is undrflow" << "\n";
            return -1;
        }
        return arr[top--];
    }
    int peek()
    {
        if (top == -1)
        {
            std::cout << "Stack is underflow" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        if(top == -1){
            return 0;
        }
        return 1;
    }

    void display(){
        
        for(int i =top; i>=0; i--){
            cout<<arr[i]<<"\n";
        }
    }
};

int main(){
    Stack st(4);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Top Element of stack is "<<st.peek()<<"\n";
    st.display();
}