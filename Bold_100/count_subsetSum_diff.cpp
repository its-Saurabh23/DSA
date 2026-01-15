#include<bits/stdc++.h>
using namespace std;

int subSetSumCount (vector<int>&arr,int n,int sum){
    
    if(sum == 0){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    
    if(sum<arr[n-1]){
        return subSetSumCount(arr,n-1,sum);
    }
    return subSetSumCount(arr,n-1,sum-arr[n-1]) + subSetSumCount(arr,n-1,sum);
    
}

int subSetSumCountWithDiff(vector<int>&arr,int diff,int n){
    
    int sumOfArray = 0;
    for(int i =0; i<n;i++){
        sumOfArray+= arr[i];
    }
    
    int sum = (diff + sumOfArray)/2;
    return subSetSumCount(arr,n,sum);
  
}

int main(){
    
    vector<int>arr ={1, 2, 3, 1, 2};
    int diff = 1;
    int n =  arr.size();
    
    int count = subSetSumCountWithDiff(arr,diff,n);
     
    cout<<count<<"\n";
    
    return 0;
}