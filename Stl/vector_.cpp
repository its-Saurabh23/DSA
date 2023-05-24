#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

// Vector 
int main(){
// vector<int> v;
// cout<<"capacity -> "<<v.capacity()<<endl;
// v.push_back(1);
// cout<<"capacity-> "<<v.capacity()<<endl;
// v.push_back(2);
// cout<<"capacity> "<<v.capacity()<<endl;
// v.push_back(3);
// cout<<"capacity->"<<v.capacity()<<endl;

// cout<<"Size-> "<<v.size()<<endl;

// cout<<"Element at 2end Index "<<v.at(2)<<endl;

// cout<<"Front->"<<v.front()<<endl;
// cout<<"Back ->"<<v.back()<<endl;

// cout<<"Before Pop back "<<endl;

// for(int i:v ){
//     cout<<i<<" ";
// }cout<<endl;

// v.pop_back();

// cout<<"After Pop Back "<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }cout<<endl;

// cout<<"Before Clear "<<v.size()<<endl;

// v.clear();
// cout<<"After clear Size "<<v.size()<<endl;

// vector<int>a(5,1);

// cout<<"Print a "<<endl;
// for(int i:a ){
//     cout<<i<<" ";
// }
// cout<<endl;

// vector<int>last(a);
// cout<<"print last "<<endl;
// for(int i:last){
//     cout<<i<<" ";
// cout<<endl;
// }


// D Queue

// deque<int>d;

// d.push_back(1);
// d.push_front(2);

// for(int i:d){
//     cout<<i<<" ";
// }
 
// d.pop_front();
// cout<<endl;

// for(int i:d){
//     cout<<i<<" ";
// }

// cout<<"Print First Index Element ->"<<d.at(1)<<endl;
// cout<<"Front "<<d.front()<<endl;
// cout<<"back "<<d.back()<<endl;

// cout<<" Empty or not "<<d.empty()<<endl;


// cout<<"before earse "<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+1);
// cout<<"After earse "<<d.size()<<endl;

// for(int i:d){
//     cout<<i<<endl;
// }





// List

// list<int>l;
// l.push_back(1);
// l.push_front(2);

// for(int i:l){
//     cout<<i<<" ";
// }cout<<endl;
// l.erase(l.begin());
// cout<<"after erase "<<endl;
// for(int i:l){
//     cout<<i<<" ";  
// }

// cout<<"Size of list "<<l.size()<<endl;

// list<int>n(5,50);
// for(int i: n){
//     cout<<i<<endl;
// }




// Stack 

// stack<string> s;
// s.push("love");
// s.push("babbar");
// s.push("Kumar");

// cout<<"Top Element "<<s.top()<<endl;

// s.pop();

// cout<<"Top Element -> "<<s.top()<<endl;
 

//  cout<<"Size of Stack "<<s.size()<<endl;

//  cout<<"Empty od not  "<<s.empty()<<endl;
 

// Queue

// queue<string>q;

// q.push("love");
// q.push("babbar");
// q.push("Kumar");

//  cout<<"First Elemnt "<<q.front()<<endl;
//  q.pop();
//  cout<<"first Element "<<q.front()<<endl;

//  cout<<"Size After pop "<<q.size()<<endl; 


// priority_queue

// MAx Heap
priority_queue<int>maxi;



// Min heap
priority_queue<int,vector<int>,greater<int> >mini;

maxi.push(1);
maxi.push(3);
maxi.push(0);
maxi.push(2);
maxi.push(0);

// cout<<"Size "<<maxi.size()<<endl;

// int n = maxi.size();
// for(int i =0; i<n; i++){
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }cout<<endl;



// //For min Heap

// mini.push(5);
// mini.push(1);
// mini.push(0);
// mini.push(4);
// mini.push(3);
// int m = mini.size();

// for(int i =0; i<m;i++){
//     cout<<mini.top()<<" ";
//     mini.pop();

// }cout<<endl;

// cout<<" Empty or not "<<mini.empty()<<endl;
 







// Set 

// set<int>s;
// s.insert(5);
// s.insert(5);
// s.insert(5);
// s.insert(1);
// s.insert(6);
// s.insert(0);
// s.insert(6);
// s.insert(6);
// for(int i :s){
//     cout<<i<<endl;
// }cout<<endl;

// s.erase(s.begin());
// for(int i: s){
//     cout<<i<<endl;
// }
// set<int>::iterator it = s.begin();
// it++;
// s.erase(it);
// for(int i :s){
//     cout<<i<<endl;
// }

// cout<<endl;
// cout<<"5 is Present or not" <<s.count(5);
    
//    set<int>::iterator itr = s.find(5);    
   

//    Map
   
map<int,string>m;

m[1]="babbar";
m[12]="love";
m[3]="kumar";
m.insert({5,"bheem"});

cout<<"Before erase "<<endl;
for(auto i:m){
  cout<<i.first<<i.second<<endl;
}

cout<<"Findong 1 -> "<<m.count(-12)<<endl;
    
//    m.erase(12);
   cout<<"After erse "<<endl;
   for(auto i:m){
    cout<<i.first<<i.second<<endl;
      }

auto it =m.find(5);
for(auto i =it; i!=m.end();i++){
 cout<<(*i).first<<endl;
}

    return 0;
}