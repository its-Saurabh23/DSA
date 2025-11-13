#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int top1;
    int top2;
    int size;
    int *arr;

    Stack(int val)
    {   size = val;
        arr = new int[val];
        top2 = size;
        top1 = -1;
    }

    void push1(int val)
    {
        if (top1 + 1 == top2)
        {
            std::cout << "stack is overflow" << "\n";
            return;
        }
        arr[++top1] = val;
    }

    void push2(int val)
    {
        if (top1 + 1 == top2)
        {
            std::cout << "Stack is overflow" << "\n";
            return;
        }
        arr[--top2] = val;
    }

    int pop1()
    {
        if (top1 == -1)
        {
            std::cout << "Stack is underflow" << "\n";
            return -1;
        }
        return arr[top1--];
    }
    int pop2()
    {
        if (top2 == size)
        {
            std::cout << "Stak is underflow" << "\n";
            return -1;
        }
    }

    int peek1()
    {
        if (top1 == -1)
        {
            std::cout << "Stack is underflow" << "\n";
            return -1;
        }
        return arr[top1];
    }

    int peek2()
    {
        if (top2 == size)
        {
            std::cout << "Stack is underflow" << "\n";
            return -1;
        }
        return arr[top2];
    }
};

int main()
{
    Stack stack(10);
    stack.push1(11);
    stack.push1(12);
    stack.push1(13);

    stack.push2(122);
    stack.push2(123);
    stack.push2(122);

    std::cout<<"Top of stack 2 is "<<stack.peek2()<<"\n"; 
    std::cout<<"Top of stack 1 is "<<stack.peek1()<<"\n"; 
    return 0;
}