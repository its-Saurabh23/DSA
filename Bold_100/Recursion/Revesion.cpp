// Implementation of stack using 2 queue
 
#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    queue<int> q1, q2;

    void push(int x)
    {
        q1.push(x);

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);
    }

    int pop(){
        if(q2.empty()){
         std::cout<<"Sack is empty "<<"\n";
         return -1;
        }
        int temp = q2.front();
        q2.pop();
        return temp;
    }

    void display(){
        if(q2.empty()){
            std::cout<<"Stack is undrflow "<<"\n";
            return;
        }
        queue<int>temp = q2;

        while (!temp.empty())
        {
           std::cout<<temp.front()<<'\n';
            temp.pop();
        }
    }
    int peek(){
        if(q2.empty()){
            std::cout<<"Stack is underflow "<<endl;
            return -1;
        }
        return q2.front();
    }
};

int main()
{
    Stack st;
    std::cout<<"Stack using Queue "<<"\n";
    st.push(990);
    st.push(991);
    st.push(992);
    st.push(993);
    st.display();
    std::cout<<"Peek Element of Stak is "<<st.peek();
    return 0;
}

//**Stack using Queue

// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
// public:
//     queue<int> q;

//     void push(int val)
//     {
//         q.push(val);
//         int size = q.size();

//         for (int i = 0; i<size - 1; i++)
//         {
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     int pop()
//     {
//         if (isEmpty())
//         {
//             std::cout << __throw_runtime_error << "\n";
//             return -1;
//         }
//         int temp = q.front();
//         q.pop();
//         return temp;
//     }

//     bool isEmpty()
//     {

//         return q.empty();
//     }

//     void display()
//     {
//         queue<int>temp = q ;
//         while (!temp.empty())
//         {
//             cout << temp.front()<<"\n";
//             temp.pop();
//         }
//     }
// };

// int main()
// {
//     Stack st;
//     st.push(199);
//     st.push(198);
//     st.push(197);
//     st.display();
//     cout<<"Poping Element "<<st.pop()<<"\n";
// }

//**Queu using two stack

// #include<bits/stdc++.h>
// using namespace std;

// class Queue{

//     public:
//     stack<int>s1,s2;

//     int push(int x){
//         s2.push(x);
//     }

//     int pop(){

//         if(s1.empty() && s2.empty()){
//           std::cout<<"Queue is empty";
//             return -1;
//         }

//         if(s1.empty()){
//            while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//            }
//         }
//         int temp = s1.top();
//         s1.pop();
//         return temp;
//     }

//     void display(){
//         if(s1.empty() && s2.empty()){
//           std::cout<<"Queue is empty"<<"\n";
//           return;
//         }
//         if(s1.empty()){
//             while(!s2.empty()){
//                 s1.push(s2.top());
//                 s2.pop();
//             }
//         }
//         stack<int>temp = s1;
//         vector<int>v;
//         while(!temp.empty()){
//              v.push_back(temp.top());
//              temp.pop();
//         }

//         for(int x:v){
//             std::cout<<x<<"\n";
//         }
//     }
// };

// int main(){

//     Queue q;
//     q.push(101);
//     q.push(102);
//     q.push(103);
//     q.push(104);

//     q.display();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Stack{

//   public:
//   int top;
//   int *arr;
//   int size;

//   Stack(int x){
//      size = x;
//      arr = new int[size];
//      top = -1;
//   }

//   void push(int val){
//       if(top == size-1){
//         std::cout<<"Stack is overflow"<<"\n";
//          return;
//       }
//       arr[++top] = val;
//   }

//   int pop(){
//     if(top == -1){
//        std::cout<<"Stack is underflow"<<"\n";
//        return -1;
//     }
//     return arr[top--];
//   }
//   int peek(){
//     if(top == -1){
//         std::cout<<"Stack is empty"<<"\n";
//         return -1;
//     }
//     return arr[top];
//   }

//   bool isEmpty(){
//     if(top == -1){
//        return  false;
//     }
//     return true;
//   }
//   void display(){

//     for(int i = top; i>=0; i--){
//         cout<<arr[i]<<"\n";
//     }
//   }

// };

// int main(){
//     Stack st(5);

//     st.push(101);
//     st.push(102);
//     st.push(103);

//     st.display();
//     std::cout<<"Peek Element ";
//     std::cout<<st.peek()<<"\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
// public:
//     int top;
//     int *arr;
//     int size;

//     Stack(int x)
//     {
//         top = -1;
//         int size = x;
//         arr = new int[size];
//     }

//     void push(int x)
//     {
//         if (top == size-1)
//         {
//             std::cout << "Stack is overflow" << "\n";
//             return;
//         }
//         arr[++top] = x;
//     }
//     int pop()
//     {
//         if (top == -1)
//         {
//             std::cout << "Stack is undrflow" << "\n";
//             return -1;
//         }
//         return arr[top--];
//     }
//     int peek()
//     {
//         if (top == -1)
//         {
//             std::cout << "Stack is underflow" << endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     bool isEmpty()
//     {
//         if(top == -1){
//             return 0;
//         }
//         return 1;
//     }

//     void display(){

//         for(int i =top; i>=0; i--){
//             cout<<arr[i]<<"\n";
//         }
//     }
// };

// int main(){
//     Stack st(4);

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     cout<<"Top Element of stack is "<<st.peek()<<"\n";
//     st.display();
// }