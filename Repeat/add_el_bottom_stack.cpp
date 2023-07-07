/*
// logic

// mystack is stack
// x = element which i want to put into the bottom of stack..

void solve(stack<int>&mystack,int x){
if (mystack.empty())
{
    mystack.push(x);
    return ;
}

int n = mystack.top();
mystack.pop();

// fucniton call
solve(mystack,x);

// atte time rest eleemtn ko put karna hai stack mai
mystack.push(num);

}

*/