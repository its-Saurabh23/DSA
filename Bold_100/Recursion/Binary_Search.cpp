#include<bits/stdc++.h>
using namespace std;

bool BinarySeach(const vector<int>&arr,int start,int end,int target){
    // cout<<"function call"<<"\n";
    if(start>=end){
        return false;
    }

    int mid = start + end-start/2;
    
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid]<target){
      return BinarySeach(arr,mid+1,end,target);   
    }else{
     return BinarySeach(arr,start,mid-1,target);
    }
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int target = 4;
   if(BinarySeach(arr,0,arr.size(),target)){
    cout<<"Element is present "<<"\n";
   }else{
    cout<<"Elemen is not present "<<"\n";
   }
    return 0;
}