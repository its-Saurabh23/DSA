#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

Node* KsortedList(Node* leftList, Node* rightList){
    if(!leftList){
        return rightList;
    }
    if(!rightList){
        return leftList;
    }
    if(leftList->data <= rightList->data){
        leftList->next = KsortedList(leftList->next,rightList);
        return leftList;
    }else{
         rightList->next = KsortedList(rightList->next,leftList);
         return rightList;
    }
}

Node* MergeSorted(int start,int end,vector<Node*>&list){

    if(start == end){
        return list[start];
    }
    int mid = start + (end-start)/2;
    Node* leftList = MergeSorted(start,mid,list);
    Node* rightList = MergeSorted(mid+1,end,list);
    return KsortedList(leftList,rightList);
}

Node* MergeKsortedLinkList(vector<Node*>list,int n){
    if(n == 0){
     return NULL;
    }
    return MergeSorted(0,n-1,list);
}

int main(){
     
}