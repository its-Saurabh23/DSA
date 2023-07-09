#include<bits/stdc++.h>
using namespace std;
int main(){

// create Queue


queue<int>q;

q.push(11);
cout<<"fornt of q is "<<q.front()<<endl;
q.push(15);
cout<<"fornt of q is "<<q.front()<<endl;
q.push(13);
cout<<"fornt of q is "<<q.front()<<endl;

cout<<"Size of queue is "<<q.size()<<endl;

q.pop();
q.pop();
q.pop();
cout<<"After the first pop(),size will be "<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is empty "<<endl;
}
else{
    cout<<"Queue id not empty "<<endl;
}
return 0;
}