#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;

 void duplicate(int arr[] , int &n){
    int j = 0;
    int temp[n];

    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] != arr[i+1]){
         temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n-1];
    
    for(int i=0 ; i<j ; i++){

        arr[i] = temp[i];
    }

    n=j;
}
void kthSmallestLargest(int arr[], int n, int k) {

    sort(arr,arr+n);

    duplicate(arr,n);
    int largest = -1;
    int smallest = -1;

    if(k<=n){
        largest = arr[n-k];
        smallest = arr[k-1];
    }

    cout<<largest<<" "<<smallest<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}