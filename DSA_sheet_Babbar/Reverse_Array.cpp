#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i = 0;i<n;i++){
        cout<<" "<<arr[i];
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    int n =5;    
    Reverse(arr,n);
}
 