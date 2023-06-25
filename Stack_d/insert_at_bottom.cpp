/*
#include <bits/stdc++.h> 

void solve(stack<int>& s,int x){
    // base case

    if(s.empty()){
        s.push(x);
        return;
    }

    // pop to element 
    int num = s.top();
     s.pop();

    //  recusive call 
    solve(s,x);

    // add remove element 
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}


*/