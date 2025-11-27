
#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    stack<int> s1, s2;

    void push(int x)
    {
        s2.push(x);
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            std::cout << "Queue is empty" << "\n";
            return -1;
        }
        if (s1.empty())
        {

            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        int temp = s1.top();
        s1.pop();
        return temp;
    }

    void display()
    {
        if (s1.empty() && s2.empty())
        {
            std::cout << "Queue is empty" << "\n";
            return;
        }

        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }

        stack<int> temp = s1;
        vector<int> v;
        while (!temp.empty())
        {
            v.push_back(temp.top());
            temp.pop();
        }
        for (int x : v)
        {
            cout << x << "\n";
        }
    }
};

int main()
{
    Queue q;
    
    q.push(101);
    q.push(102);
    q.push(103);
    q.push(104);
    
    q.display();
    cout<<"\n";

    std::cout<<"Delete Element:: "<<q.pop()<<"\n";
    std::cout<<"After deletion display "<<"\n";
    q.display();

    return 0;
}
