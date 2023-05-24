#include<bits/stdc++.h>
using namespace std;


void merge(int *arr,int s,int e){
    int mid = s+(e-s) /2;
    
    int len1 = mid - s + 1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // coping from large array to small array 
    int mainIndex = s ;
    for(int i = 0; i<len1 ;i++){
        first[i] = arr[mainIndex++];
    } 
     mainIndex = mid+1 ;
    for(int i = 0; i<len2; i++){
        second[i] = arr[mainIndex++];
    }

    // merge  2 sorted array 

    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 <len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }

        if(index1<len1){
            arr[mainIndex++] = first[index1++];
        }
        if(index2<len2){
            arr[mainIndex++] = second[index2++];
        }
    }

}
void mergeSort(int *arr,int s,int e){
    // base case 
    if(s>=e){
        return ;
    } 
   int mid =  s + (e-s)/2;
    // left part 
    mergeSort(arr,s,mid);
  // right part 
    mergeSort(arr,mid+1,e);
    // merge
    merge(arr,s,e);
}

int main(){

int arr[5]={2,5,1,6,9};
int n =5;
mergeSort(arr,0,n-1);
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}