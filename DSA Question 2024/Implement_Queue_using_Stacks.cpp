class MyQueue {
private:
stack <int>s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
       while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
       }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int front = s1.top();
        s1.pop();
        return front;
    }
    
    int peek() {
        int top = s1.top();
        return top;
    }
    
    bool empty() {
        return s1.empty();
    }
};