#include<bits/stdc++.h>
using namespace std;

 pair<int,int>secondSmall(vector<int>&arr){
   
     int n = arr.size();
     int small = INT_MAX;
     int secondSmall_element = INT_MAX;
     
     if(n<2){
         cout<<"Size is less than 2"<<endl;
     }
     
    for(int i=0;i<n; i++){
        if(arr[i]<small){
            secondSmall_element = small;
            small  = arr[i];
        }
        else if(arr[i]<secondSmall_element && arr[i] !=small){
            secondSmall_element = arr[i];
        }
    } 
    return {small,secondSmall_element};
 }
 
 int  main(){
  
    std::vector<int>arr{0,2,3,45,6};
    pair<int,int>smallest__secondSmallValue = secondSmall(arr);
    
    cout<<"smallest value: "<< smallest__secondSmallValue.first<<endl;
     cout<<"second smallest: " <<smallest__secondSmallValue.second<<endl;
    
    return 0;
 }