#include<bits/stdc++.h>
using namespace std;


int partition(int *arr,int s,int e){

     // let Piovot Element 
    int pivot = arr[s];
    int count = 0;

    for(int i = s+1; i<=e; i++){
        if(arr[i]<=pivot){ 
        count++;
        }
    }
    // We geeting the right place
int pivotIndex = s + count;

swap(arr[pivotIndex],arr[s]);

// left or right part ko sort karege ..
int i = s, j = e;

while(i <pivotIndex && j>pivotIndex){
     
     while(arr[i]<=pivot){
        i++;
     }
     while(arr[j]>pivot){
        j--;
     }

     if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
     }
} 
return pivotIndex;

}


void quickSort(int *arr,int s,int e){
// base cse 

if(s >=e){
    return ;
}

// Partition 
int p = partition(arr,s,e);

// left part
quickSort(arr,s,p-1);

// Right part
quickSort(arr,p+1,e); 

}


int main(){

int arr [10] ={7,6,1,8,2,3,4,5,5,8};
int n = 10;

quickSort(arr,0,n-1);

for(int i = 0; i<n; i++){

    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}