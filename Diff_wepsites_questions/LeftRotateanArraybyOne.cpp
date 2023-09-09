/*
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.

     
    int track = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = track;

    return arr; 
}

*/


// logic just store first element and shift all the array after that place the 
// first element ant last postion by arr[n-1] = tmep;