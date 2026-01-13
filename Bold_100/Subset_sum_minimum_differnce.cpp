#include<bits/stdc++.h>
using namespace std;

bool subSetSum(vector<int>&arr,int n int sum){
    if(n == 0){
      return 0;
    }
    if(sum == 0){
       return 1;
    }

    if(are[n-1] >= sum){
      return subsetsum(arr,n-1,sum);
     }

    return subsetsum(arr,n-1,sum-arr[n-1]) ||subsetsum(arr,n-1,sum);
}

int solve(vector<int>&arr){
  
    int n = arr.size();
    int sum = 0;
    for(int i  = 0;i <n/2; i++)}{
        sum += arr[i];
    }

    for(int i=0;i<sum/2;i++){

       if(subSetSum(arr,n,sum)){
         mini = min(mini,2*arr[i];
       }

    }
return mini;

}

int main(){
  vector<int>arr={1, 6, 11, 5};
  solve(arr);
    return 0;
}