#include<bits/stdc++.h>
using namespace std;


void sort012(int *arr,int n){
    // 0102012

    int start = 0;
    int low = 0;
    int high = n-1;
     while(start<=high){

      if(arr[start] == 0){
        swap(arr[start++],arr[low++]);
      } 
      else if(arr[start] == 1){
        start++;
      }
       else{
        swap(arr[start],arr[high--]);
       }
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}