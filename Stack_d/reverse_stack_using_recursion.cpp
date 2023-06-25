
/*
void insertAtBottom(stack<int>& s,int element){
    // base case 
    if(s.empty()){
        s.push(element);
        return;
    }
    //   store top element
   int num = s.top();
   s.pop();
   //   recusive call 
    insertAtBottom(s,element);

   // inserting store element
   s.push(num);

}
void reverseStack(stack<int> &stack) {
    

    // base case 
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call 
    reverseStack(stack);
    insertAtBottom(stack,num);
}

*/