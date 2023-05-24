#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;

vector<int>a(5,1);
cout<<"Print a "<<endl;
for(int i:a){
    cout<<i<<" "; 
}
cout<<"Capacity->"<<v.capacity()<<endl;

v.push_back(1);
cout<<"Capacity->"<<v.capacity()<<endl;

v.push_back(2);
cout<<"Capacity->"<<v.capacity()<<endl;
    
 v.push_back(3);
cout<<"Capacity->"<<v.capacity()<<endl;
cout<<"Size->"<<v.size()<<endl;
    

cout<<"Element at 2nd Index "<<v.at(2)<<endl;

cout<<"Fornt Element "<<v.front()<<endl;
cout<<"Last Elemtn " <<v.back()<<endl;   

cout<<"Before Pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;

v.pop_back(); // One at time
// v.pop_back(); 
cout<<"After Pop"<<endl;
for(int i:v){
cout<<i<<" ";
}


cout<<"Before clear size "<<v.size()<<endl;
v.clear();


cout<<"After the clear size "<<v.size()<<endl;
    return 0;
}