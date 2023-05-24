#include<bits/stdc++.h>
using namespace std;
 /*
void RotateArray(int *arr,int n, int k){


    // If rotation is greater
    // than size of array
    k = k % n;
for(int i = 0; i<n; i++){
    if(i<k){
        cout<<arr[n+i-k]<<" ";
    }
    else{
        cout<<arr[i-k]<<" ";
    }
}
cout<<"\n";
}

// Time complexity : O(n) 
//Auxiliary Space : O(1)
*/

// Time complexity : O(n2) 
//Auxiliary Space : O(1)
void RotateArray(int arr[],int n,int k){

    for(int i =0; i<k; i++){
        for(int j = 0;j<n-1; j++){
            swap(arr[j],arr[j+1]);
        }
    } 
}

int main(){ 

int arr[]={1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 2;

RotateArray(arr,n,k);

for(int i =0;i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}