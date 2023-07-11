#include<bits/stdc++.h>
using namespace std;

int main(){

deque<int>d;

d.push_front(12);
d.push_back(14);

cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_back();

cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_front();

if(d.empty()){
    cout<<"D Queue is Empty "<<endl;
}
else{
    cout<<"Not empty "<<endl;
}
    return 0;
}