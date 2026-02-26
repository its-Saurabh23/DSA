#include<bits/stdc++.h>
using namespace std;

bool subSetSum(vector<int>&arr,int sum,int n){
    if(sum == 0){
      return true;
    }
    if(n === 0){
        return false;
    }

    if(arr[n-1]>sum){
      return subsetsum(are,sum,n-1);
    }
      
    else if(arr[n-1]<=sum){
      return subsetsum(arr,sum-arr[n-1],n-1) || subsetsum(arr,sum,n-1);
     }
}

int main(){

   vector<int>arr={1,2,3,4,};
   int sum = 10;
   int n = arr.size();
   subSetSum(arr,sum,n);

   return  0;
}