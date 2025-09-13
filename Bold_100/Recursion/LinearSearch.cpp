#include<bits/stdc++.h>
using namespace std;

bool linearSerach(const vector<int>&arr,int index,int target){
   
    if(index == -1){
      return false;
    }
    if(arr[index] == target){
        return true;
    }
    linearSerach(arr,index-1,target);
}

int main(){
    vector<int>arr={1,2,3,4,5};
    int target = 4;
   
   if(linearSerach(arr,arr.size(),target)){
    cout<<"Element is Present"<<"\n";
   }else{
    cout<<"Element is not Present"<<"\n";
   }

    return 0;
}