#include<bits/stdc++.h>
using namespace std;


void merge(int *arr,int s,int e){
    int mid  = s +(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;
  
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values

   int  mainArrayIndexd = s;
    for(int i =0; i<len1; i++){
        first[i]=arr[mainArrayIndexd++];
    }

    // second value
    mainArrayIndexd = mid+1;
    for(int i=0;i<len2; i++){
        second[i] = arr[mainArrayIndexd++];
    }

    // merge 2 sorted array 
    int index1 = 0;
    int  index2 = 0;
    mainArrayIndexd = s;

  
  while(index1<len1 && index2 <len2){
     if(first[index1]<second[index2]){
        arr[mainArrayIndexd++]=first[index1++];
     }
     else{
        arr[mainArrayIndexd++] =second[index2++];
     }
  }

  while(index1<len1){
     arr[mainArrayIndexd++] = first[index1++];
  }       
  while(index2<len2){
    arr[mainArrayIndexd++]= second[index2++];
  }

//delete dynamic allocation

delete []first;
delete []second;

}
void mergeSort(int *arr,int s,int e){
    // base case

    if(s>=e){
        return ;
    }
  int mid = s +(e-s)/2;
    // left part sort
    mergeSort(arr,s,mid);

    // right part sort karna
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);
}


int main(){
int arr [10]={3,8,1,0,34,66,87,12,12,12};
int n = 10;

mergeSort(arr,0,n-1);
for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}cout<<endl;

    return 0;
}