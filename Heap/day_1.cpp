#include<bits/stdc++.h>
using namespace std;

/*
1- for creation of hrap use make_heap(.begin,.end()) funciton
2 - for getting maximum elenent in heap use .fornt() function 

push element in heap by push_back() fuction 
  After this we have to push the element in the heap also
  so heap.push(.begin(),.end())

  // using pop_heap() function to move the largest element
  // to the end

  // actually removing the element from the heap using
    // pop_back()
    we can't give the desire Number to remove the element  because heap works automatically and it remove thr top most element .

 For Sorting the Heap use sort_heap()
*/

void print(vector<int>& h)
{
for(auto i: h){
    cout<<i <<" ";
}
}

int main(){

    vector<int> h ={5,4,1,2,3,0,-1};
    // converting the vector into the heap dataStructure using make_heap Function
    make_heap(h.begin(),h.end()); 
    print(h);

    // Now sorting the heap.
    cout<<"After Sorting the heap "<<endl;
     sort_heap(h.begin(),h.end());
     print(h);



/*   
    vector<int> h ={11,33,22,55};
// make heap
cout<<"Initial Heap "<<endl;
make_heap(h.begin(),h.end());
print(h);
h.push_back(66);
cout<<"After pusing element in the heap "<<endl;
for(auto i:h){
    cout<<i <<" ";
}
push_heap(h.begin(),h.end());
cout<< " maximum element in heap will be "<<h.front()<<endl;

pop_heap(h.begin(),h.end());
cout<<"After pop_heap Funciton "<<endl;
print(h);

cout<<"After the pop back Functoin "<<endl;
h.pop_back();
cout<<endl;
print(h);


 vector<int>heap = {2,3,4,1,0};
make_heap(heap.begin(),heap.end());

cout<<"Maximum element in heap will be "<<heap.front()<<endl;
*/



    return 0;
}