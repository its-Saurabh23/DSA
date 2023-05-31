#include<bits/stdc++.h>
using namespace std;


int partition(int *arr,int s,int e){
 
 int pivot =arr[s];
 int count = 0;
 for(int i =s+1; i<=e; i++){
     if(arr[i]<=pivot){
        count++;
     }
 } 

// Right placce  of pivote;

int pivotIndex = s+count;
swap(arr[pivotIndex],arr[s]);

// Left right part
int i =s, j =e;

while( i <pivotIndex && j>pivotIndex){
    
    while(arr[i]<=pivot){
   i++;
    }
    while(arr[j]>pivot){
        j--;
    }

    if(i<pivotIndex &&j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
}
return pivotIndex;




}
void quicksort(int *arr,int s,int e){

    // bae case
    if(s>=e){
        return ;
    }

    // partition 
int p = partition(arr,s,e);

//left part sort    
  quicksort(arr,s,p-1);


// Right part sort
quicksort(arr,p+1,e);



}

int main(){

int arr[10]={2,4,1,6,9,7,7,9,0,7};
int n =10;
quicksort(arr,0,n-1);
for(int i =0; i<n; i++){
    cout<<arr[i]<<endl;
}

    return 0;
}