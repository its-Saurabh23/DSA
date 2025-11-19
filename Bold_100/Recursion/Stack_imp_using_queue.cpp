#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    queue<int> q;

    void push(int val)
    {
        q.push(val);
        int size = q.size();

        for (int i = 0; i < size-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cout << __throw_runtime_error << "\n";
            return -1;
        }
        int temp = q.front();
        q.pop();
        return temp;
    }
    int peek(){
        if(isEmpty()){
            std::cout<<__throw_runtime_error<<"\n";
            return -1;
        }
        int temp = q.front();
        return temp;
    }

    bool isEmpty(){
        return q.empty();
    }
    void display(){
        while (!q.empty())
        {   
            cout<<q.front()<<"\n";
            q.pop();

        }
        
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(11);
    st.push(12);

    std::cout<<"Top Element "<<st.peek()<<"\n";
    std::cout<<"Pop operation in stack "<<st.pop()<<"\n";
    st.display();

    return 0;
}