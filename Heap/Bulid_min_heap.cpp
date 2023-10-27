#include <bits/stdc++.h>

void heapify(vector<int>&arr,int n,int i){
  int samlest = i;
  int left = 2*i +1;
  int right = 2*i +2;

  if(left<n && arr[samlest]>arr[left]){
      samlest = left;
  }
  if(right<n && arr[samlest]>arr[right]){
      samlest = right;
  }

  if(samlest != i){
      swap(arr[samlest],arr[i]);
      heapify(arr,n,samlest);
  }

}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i = n/2; i>=0;i--){
               heapify(arr,n,i);
    }
    return arr;
}
