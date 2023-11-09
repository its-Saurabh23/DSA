// apply the logic of find the minimum number in roted sorted sorted array

#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
  int low = 0;
  int high = arr.size()-1;

  int ans = INT_MAX;
  int index = -1;

  while(low<=high){

      int mid  = (low+high)/2;

      //nodmal condition

      if(arr[low]<= arr[high]){
          if(arr[low]<ans){
             ans  = arr[low];
             index = low; 
          }break;
      }
     // Binary serach logic 
      if(arr[mid]>= arr[low]){
          if(arr[low]<ans){
              ans =  arr[low];
              index = low;
          }
          // look at the right part 
          low = mid+1;
      }
      else{
        
        if(arr[mid]<ans){
            ans = arr[mid];
            index  = mid; 
        }
        //  look at the left part 
        high = mid-1;
      }
  } 
  return index;
}