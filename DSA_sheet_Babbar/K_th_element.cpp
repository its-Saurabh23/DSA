#include <bits/stdc++.h>
using namespace std;


int main(){

int arr[] { 6,2,3,4,1,9};
int n = sizeof(arr)/sizeof(arr[0]); 
sort(arr,arr+n);

int k = 3;
cout<<arr[k-1]<<endl; 
    return 0;

}