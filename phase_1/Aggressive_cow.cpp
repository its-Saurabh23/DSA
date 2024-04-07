#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr [],int k ,int mid){
int cowCount =1;
int lastPos = arr[0];
for(int i = 0; i<5; i++){
    if(arr[i]-lastPos >=mid){
        cowCount++;
    }
    if(cowCount == k){
      return true;
    }
} 

return false;
}

int aggressiveCow(int arr[],int k){

 sort(arr,arr+k);
    int s = 0;
    int maxi = -1;
    for(int i =0; i<5;i++){

        maxi = max(maxi,arr[i]);
    }

    int e = maxi;
    int mid = s +(e-s)/2;
    int ans =-1;

    while(s<=e){

        if(isPossible(arr,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }

}