#include <bits/stdc++.h>
using namespace std;

int  Unique(int arr[],int n){
int ans = 0;
for(int i =0; i<n; i++){
ans = ans^arr[i];
}
}

int printArray(int arr[],int n){
    for(int i=0;i<n; i++){
        cout<<arr[i];
    }cout<<endl;
}
int main(){

    int n;
    int arr[50];
    cin>>n;
    cout<<"Enter the size of arry "<<endl;
    cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}

Unique(arr,n);
printArray(arr,n);
    return 0;
}